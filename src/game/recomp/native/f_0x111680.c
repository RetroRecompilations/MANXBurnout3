#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111680
 * Original: 0x00111680 - 0x00111743 (195 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111680(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00111680:
    ecx = MEM32(ebx + 0x16C);
    PUSH32(esp, esi);
    esi = eax;
    ecx = ecx - esi;
    ecx = ecx - 0x70;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 3);
    PUSH32(esp, edi);
    edi = edx;
    edi = edi >> 0x1F;
    edi = edi + edx;
    MEM32(esi + 0x1CB70) = MEM32(esi + 0x1CB70) - 1;
    edx = esi;
    PUSH32(esp, 0); sub_00111BD0(); /* call 0x00111BD0 */

loc_001116AD:
    MEM32(ebx + 0x16C) = 0;
    eax = MEM32(esi + 0x1CB70);
    if (CMP_EQ(edi, eax)) goto loc_00111740; /* je: equal / zero */

loc_001116C1:
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = eax + esi + 0x70;
    edx = edi + edi * 2;
    edx = edx << 4;
    esi = esi + edx;
    SET_LO8(edx, MEM8(ecx));
    eax = esi + 0x70;
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(edx);
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), 3)) goto loc_0011171B; /* jne: not equal / not zero */

loc_0011170F:
    ecx = MEM32(esi + 0x7C);
    MEM32(ecx + 0x16C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011171B:
    SET_LO8(edx, MEM8(0x5A3759));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00111740; /* je: equal / zero */

loc_00111725:
    if (CMP_NE(LO8(ecx), 4)) goto loc_00111740; /* jne: not equal / not zero */

loc_0011172A:
    edx = MEM32(esi + 0x7C);
    ecx = ZX8(MEM8(edx + 0x2429));
    ecx = ecx + ecx * 2;
    ecx = ecx << 7;
    MEM32(ecx + 0x62611C) = eax;

loc_00111740:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
