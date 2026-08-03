#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001464D0
 * Original: 0x001464D0 - 0x0014652B (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001464D0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001464D0:
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001464F7; /* je: equal / zero */

loc_001464D9:
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001464DE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001464F5; /* je: equal / zero */

loc_001464E2:
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    eax = MEM32(esi + 0x14);
    if (CMP_NE(eax, ecx)) goto loc_001464F4; /* jne: not equal / not zero */

loc_001464EF:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001464F4:
    POP32(esp, esi);

loc_001464F5:
    MEM32(edi) = ebx;

loc_001464F7:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0x34) = ebx;
    MEM32(edi) = ebx;
    MEM8(edi + 5) = LO8(ebx);
    MEM8(edi + 4) = LO8(ebx);
    MEM8(edi + 6) = LO8(ebx);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x20) = ecx;
    MEM32(edi + 0x38) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
