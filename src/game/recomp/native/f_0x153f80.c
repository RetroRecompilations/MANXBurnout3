#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153F80
 * Original: 0x00153F80 - 0x001540F5 (373 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153F80:
    eax = MEM32(edi + 0x5F0);
    /* cmp eax, 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_L(eax, 2)) goto loc_00154001; /* jl: less (signed <) */

loc_00153F8D:
    if (CMP_LE(eax, 7)) goto loc_00153F97; /* jle: less or equal (signed <=) */

loc_00153F92:
    if (CMP_NE(eax, 0x17)) goto loc_00154001; /* jne: not equal / not zero */

loc_00153F97:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_00153F9D:
    ecx = MEM32(edi + 0x5EC);
    if (TEST_Z(ecx, ecx)) goto loc_00153FBB; /* je: equal / zero */

loc_00153FA7:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_00153FAC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153FBB; /* je: equal / zero */

loc_00153FB0:
    esi = MEM32(edi + 0x5EC);
    PUSH32(esp, 0); sub_001CB1C0(); /* call 0x001CB1C0 */

loc_00153FBB:
    edx = MEM32(edi + 0x618);
    edx = edx & 0xFFFFFFFBu;
    esi = edi;
    MEM32(edi + 0x5EC) = 0;
    MEM32(edi + 0x618) = edx;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00153FDB:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00153FE9; /* jne: not equal / not zero */

loc_00153FDF:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00153FE4:
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00153FE9:
    ebx = edi;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00153FF0:
    MEM8(edi + 0x62E) = 1;
    MEM32(edi + 0x5F0) = 0x18;

loc_00154001:
    SET_LO8(edx, MEM8(edi + 0x564));
    xmm0.f[0] = MEMF(0x3EC930); /* movss */
    eax = MEM32(edi + 0x5F8);
    SET_LO8(edx, LO8(edx) & 0xFB);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(edi + 0x564) = LO8(edx);
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEM8(0x40FBAE) = LO8(ebx);
    ecx = MEM32(edi + 0x5F8);
    if (TEST_Z(ecx, ecx)) goto loc_001540F0; /* je: equal / zero */

loc_00154039:
    eax--;
    /* cmp eax, 4 - flags set for next jcc */
    MEM32(edi + 0x5F8) = 0;
    if (CMP_A(eax, 4)) goto loc_001540AE; /* ja: above (unsigned >) */

loc_00154049:
    { uint32_t _jt = MEM32(eax * 4 + 0x1540F8); /* switch: 5 entries, 1 targets */
    if (_jt == 0x00154050u) goto loc_00154050;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00154050:
    if (CMP_EQ(MEM32(edi + 0x5F4), 1)) goto loc_001540AE; /* je: equal / zero */

loc_00154059:
    eax = edi;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_00154060:
    if (CMP_EQ(MEM32(edi + 0x5F8), 3)) goto loc_001540AE; /* je: equal / zero */

loc_00154069:
    eax = edi;
    PUSH32(esp, 0); sub_00153A20(); /* call 0x00153A20 */

loc_00154070:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015407F; /* jne: not equal / not zero */

loc_00154074:
    esi = edi;
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_0015407B:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154087; /* jne: not equal / not zero */

loc_0015407F:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_00154085:
    SET_LO8(ebx, 1);

loc_00154087:
    SET_LO8(eax, MEM8(edi + 0xD0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015409D; /* je: equal / zero */

loc_00154091:
    MEM32(edi + 0x5F4) = 0xB;
    goto loc_001540AE;

loc_0015409D:
    eax = edi;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_001540A4:
    MEM32(edi + 0x5F4) = 0;

loc_001540AE:
    if (CMP_NE(MEM32(edi + 0x5F8), 4)) goto loc_001540F0; /* jne: not equal / not zero */

loc_001540B7:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_001540BD:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001540E6; /* jne: not equal / not zero */

loc_001540C1:
    SET_LO8(eax, MEM8(edi + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001540E0; /* je: equal / zero */

loc_001540CB:
    SET_LO8(eax, MEM8(edi + 0x566));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001540E0; /* jne: not equal / not zero */

loc_001540D5:
    esi = edi;
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_001540DC:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001540E6; /* jne: not equal / not zero */

loc_001540E0:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_001540E6:
    MEM32(edi + 0x5F4) = 0;

loc_001540F0:
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
