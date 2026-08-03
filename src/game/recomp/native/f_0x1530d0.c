#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001530D0
 * Original: 0x001530D0 - 0x00153210 (320 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001530D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001530D0:
    ecx = MEM32(eax + 0x54C);
    ecx--;
    if (CMP_A(ecx, 4)) goto loc_0015320F; /* ja: above (unsigned >) */

loc_001530E0:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    { uint32_t _jt = MEM32(ecx * 4 + 0x153210); /* switch: 5 entries, 4 targets */
    if (_jt == 0x001530EAu) goto loc_001530EA;
    if (_jt == 0x00153124u) goto loc_00153124;
    if (_jt == 0x0015319Au) goto loc_0015319A;
    if (_jt == 0x001531BCu) goto loc_001531BC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001530EA:
    if (CMP_EQ(MEM32(eax + 0x540), ebx)) goto loc_0015320E; /* je: equal / zero */

loc_001530F6:
    if (CMP_NE(MEM8(eax + 0x565), LO8(ebx))) goto loc_0015320E; /* jne: not equal / not zero */

loc_00153102:
    ecx = MEM32(eax + 0x53C);
    if (CMP_EQ(ecx, ebx)) goto loc_0015320E; /* je: equal / zero */

loc_00153110:
    if (CMP_NE(MEM32(ecx + 0x24), 0xB)) goto loc_0015320E; /* jne: not equal / not zero */

loc_0015311A:
    MEM32(eax + 0x54C) = 2;

loc_00153124:
    if (TEST_NZ(MEM8(eax + 0x564), 8)) goto loc_00153149; /* jne: not equal / not zero */

loc_0015312D:
    ecx = MEM32(eax + 0x53C);
    edx = MEM32(ecx + 0x238);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x20));
    edx = edx + 0x1388;
    MEM32(eax + 0x560) = edx;

loc_00153149:
    ecx = MEM32(eax + 0x540);
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    esi = MEM32(edx + esi * 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    edi = MEM32(edx + edi * 4);
    ecx = MEM32(ecx + 8);
    edx = MEM32(edx + ecx * 4);
    MEM32(0x45BB14) = edi;
    MEM32(0x45BB18) = esi;
    POP32(esp, edi);
    MEM32(0x45BB10) = edx;
    MEMF(0x45BB0C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x54C) = 4;
    POP32(esp, esi);

loc_0015319A:
    ecx = MEM32(eax + 0x53C);
    edx = MEM32(ecx + 0x238);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x20));
    if (CMP_L(edx, MEM32(eax + 0x560))) goto loc_0015320E; /* jl: less (signed <) */

loc_001531B2:
    MEM32(eax + 0x54C) = 5;

loc_001531BC:
    MEM32(0x45BB10) = ebx;
    MEM32(0x45BB14) = ebx;
    MEM32(0x45BB18) = ebx;
    /* cmp MEM32(eax + 0x54C), 3 - flags set for next jcc */
    SET_LO8(edx, MEM8(eax + 0x564));
    ecx = 1;
    if (CMP_NE(MEM32(eax + 0x54C), 3)) goto loc_001531F9; /* jne: not equal / not zero */

loc_001531E2:
    SET_LO8(edx, LO8(edx) | 8);
    MEM8(eax + 0x565) = LO8(ebx);
    MEM8(eax + 0x564) = LO8(edx);
    MEM32(eax + 0x54C) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001531F9:
    SET_LO8(edx, LO8(edx) & 0xF7);
    MEM8(eax + 0x565) = LO8(ecx);
    MEM8(eax + 0x564) = LO8(edx);
    MEM32(eax + 0x54C) = ecx;

loc_0015320E:
    POP32(esp, ebx);

loc_0015320F:
    esp += 4; return; /* ret */

}
