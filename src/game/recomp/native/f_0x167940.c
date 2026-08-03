#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00167940
 * Original: 0x00167940 - 0x00167A93 (339 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167940:
    SET_LO8(eax, MEM8(esi + 0xC44));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167A90; /* je: equal / zero */

loc_0016794E:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = esi + 0x2A0;
    /* nop */

loc_00167960:
    eax = 1;
    edx = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00245EE0(); /* call 0x00245EE0 */

loc_0016796E:
    eax = eax & MEM32(esi + 0xC20);
    edx = edx & MEM32(esi + 0xC24);
    eax = eax | edx;
    if ((eax == 0)) goto loc_0016799F; /* je: equal / zero */

loc_0016797E:
    if (CMP_EQ(edi, 0xE)) goto loc_0016798A; /* je: equal / zero */

loc_00167983:
    if (TEST_Z(edi, edi)) goto loc_0016798A; /* je: equal / zero */

loc_00167987:
    PUSH32(esp, ebp);
    goto loc_00167991;

loc_0016798A:
    edx = MEM32(0x4AE1FC);
    PUSH32(esp, edx);

loc_00167991:
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    edx = esi + 0x250;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_0016799F:
    edi++;
    ebx = ebx + 4;
    if (CMP_L(edi, 0x14)) goto loc_00167960; /* jl: less (signed <) */

loc_001679A8:
    ecx = MEM32(esi + 4);
    if (TEST_Z(ecx, ecx)) goto loc_001679BD; /* je: equal / zero */

loc_001679AF:
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_001679BD:
    SET_LO8(eax, MEM8(esi + 0xC45));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001679D7; /* je: equal / zero */

loc_001679C7:
    xmm0.f[0] = MEMF(0x3B1850); /* movss */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */

loc_001679D7:
    eax = MEM32(esi + 0x250);
    ecx = esi + 0x250;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x10), _icall_esp); /* indirect call */
    }

loc_001679E7:
    eax = MEM32(esi + 0xC30);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_00167A51; /* jne: not equal / not zero */

loc_001679F4:
    ecx = MEM32(esi + 0xC38);
    edx = MEM32(0x47A134);
    ecx = ecx << 5;
    eax = MEM32(ecx + edx + 0x9A4);
    ecx = ecx + edx;
    edx = eax;
    edx = edx & 0x80000000u;
    if (CMP_NE(edx, 0x80000000u)) goto loc_00167A51; /* jne: not equal / not zero */

loc_00167A1C:
    xmm0.f[0] = MEMF(esi + 0xC28); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x990) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ecx + 0x990))) goto loc_00167A51; /* jb: below (unsigned <) */

loc_00167A2D:
    eax = eax >> 0xA;
    eax = eax & 3;
    if (CMP_NE(eax, 1)) goto loc_00167A3F; /* jne: not equal / not zero */

loc_00167A38:
    MEM8(0x47A105) = LO8(eax);
    goto loc_00167A4B;

loc_00167A3F:
    if (CMP_NE(eax, 2)) goto loc_00167A4B; /* jne: not equal / not zero */

loc_00167A44:
    MEM8(0x47A105) = 0;

loc_00167A4B:
    MEM32(esi + 0xC38) = MEM32(esi + 0xC38) + 1;

loc_00167A51:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00167A90; /* je: equal / zero */

loc_00167A5A:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC2C); /* addss */
    MEMF(esi + 0xC2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    MEMF(esi + 0xC28) = xmm0.f[0]; /* movss */

loc_00167A90:
    esp += 8; return; /* ret 4 */

}
