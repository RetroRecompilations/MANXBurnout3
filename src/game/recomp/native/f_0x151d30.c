#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00151D30
 * Original: 0x00151D30 - 0x00151EB9 (393 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151D30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00151D30:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(0x73A1C0);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00151E6F; /* jle: less or equal (signed <=) */

loc_00151D50:
    edi = 0x73A218;

loc_00151D55:
    ecx = MEM32(edi + 0x23F8);
    xmm0.f[0] = MEMF(edi + -8); /* movss */
    eax = MEM32(ecx + 0xCC4);
    SET_LO8(edx, MEM8(eax + 0x1016));
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + -4); /* movss */
    ebx = 0; /* xor self */
    /* test LO8(edx), 0xF0 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(edx), 0xF0)) goto loc_00151E50; /* je: equal / zero */

loc_00151D92:
    SET_LO8(eax, MEM8(edi + 0x18B2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00151E50; /* je: equal / zero */

loc_00151DA0:
    edx = MEM32(esi + 0x878);
    /* test edx, edx - flags set for next jcc */
    eax = esi + 0x878;
    ebx = 1;
    if (TEST_NZ(edx, edx)) goto loc_00151DEA; /* jne: not equal / not zero */

loc_00151DB5:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x858);
    PUSH32(esp, eax);
    eax = MEM32(0x3EC410);
    edx = esi + 0x428;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001509F0(); /* call 0x001509F0 */

loc_00151DD8:
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(esi + 0x8D5) = LO8(ecx);
    MEM8(esi + 0x8D6) = LO8(ebx);
    goto loc_00151E50;

loc_00151DEA:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8D5);
    if (CMP_NE(edx, MEM32(esp + 0xC))) goto loc_00151E50; /* jne: not equal / not zero */

loc_00151DF7:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xB0), 16); /* movaps */
    ecx = MEM32(0x3EC410);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x434) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, ecx);
    MEMF(esi + 0x438) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(esi + 0x43C) = xmm0.f[0]; /* movss */
    edx = MEM32(0x60EA20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x428;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00150AF0(); /* call 0x00150AF0 */

loc_00151E50:
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x73A1C0);
    eax++;
    edi = edi + 0x27E0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_00151D55; /* jl: less (signed <) */

loc_00151E6D:
    goto loc_00151E73;

loc_00151E6F:
    ebx = MEM32(esp + 0x10);

loc_00151E73:
    if (TEST_NZ(ebx, ebx)) goto loc_00151EB3; /* jne: not equal / not zero */

loc_00151E77:
    eax = MEM32(esi + 0x878);
    if (TEST_Z(eax, eax)) goto loc_00151EB3; /* je: equal / zero */

loc_00151E81:
    edi = eax;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00151E8D:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00151E97:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0x878) = ebx;

loc_00151EB3:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
