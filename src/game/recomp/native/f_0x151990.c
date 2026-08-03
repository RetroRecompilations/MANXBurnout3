#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00151990
 * Original: 0x00151990 - 0x00151B64 (468 bytes, 121 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00151990:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    SET_LO8(eax, MEM8(esi + 0x8DA));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00151B5E; /* jne: not equal / not zero */

loc_001519A9:
    eax = MEM32(0x73A1C0);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00151B1D; /* jle: less or equal (signed <=) */

loc_001519C0:
    edi = 0x73A218;
    goto loc_001519D0;

    /* nop */
    edi = edi;

loc_001519D0:
    xmm0.f[0] = MEMF(edi + -8); /* movss */
    SET_LO8(eax, MEM8(edi + 0x18B2));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + -4); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001519FE; /* je: equal / zero */

loc_001519FA:
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;

loc_001519FE:
    edx = MEM32(esi + 0x868);
    /* test edx, edx - flags set for next jcc */
    ecx = esi + 0x868;
    if (TEST_NZ(edx, edx)) goto loc_00151A94; /* jne: not equal / not zero */

loc_00151A12:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00151B01; /* je: equal / zero */

loc_00151A1A:
    eax = MEM32(esi + 0x520);
    ecx = MEM32(esi + 0x524);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    eax = eax << 0x10;
    edx = edx + ecx;
    eax = eax + edx;
    MEM32(esi + 0x520) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x524) = eax;
    eax = MEM32(esi + 0x520);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x3EC404));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x3EC404)); }
    if (TEST_NZ(edx, edx)) goto loc_00151A8B; /* jne: not equal / not zero */

loc_00151A52:
    edx = MEM32(0x3EC408);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esi + 0x868;
    PUSH32(esp, eax);
    ecx = esi + 0x7E8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_001509F0(); /* call 0x001509F0 */

loc_00151A7C:
    MEM8(esi + 0x8D3) = LO8(ebx);
    MEM8(esi + 0x8D6) = 1;
    goto loc_00151B01;

loc_00151A8B:
    MEM8(esi + 0x8DA) = 1;
    goto loc_00151B01;

loc_00151A94:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00151B01; /* je: equal / zero */

loc_00151A98:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x8D3);
    if (CMP_NE(eax, ebx)) goto loc_00151B01; /* jne: not equal / not zero */

loc_00151AA3:
    edx = MEM32(edi + 0x23F8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0xB0), 16); /* movaps */
    eax = MEM32(0x3EC408);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x7F4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, eax);
    MEMF(esi + 0x7F8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(esi + 0x7FC) = xmm0.f[0]; /* movss */
    edx = MEM32(0x60EA20);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0x7E8;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_00150AF0(); /* call 0x00150AF0 */

loc_00151B01:
    eax = MEM32(0x73A1C0);
    ebx++;
    edi = edi + 0x27E0;
    if (CMP_L(ebx, eax)) goto loc_001519D0; /* jl: less (signed <) */

loc_00151B15:
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00151B5E; /* jne: not equal / not zero */

loc_00151B1D:
    edi = MEM32(esi + 0x868);
    if (TEST_Z(edi, edi)) goto loc_00151B5E; /* je: equal / zero */

loc_00151B27:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00151B32:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00151B3D:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = 0;
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0x868) = 0;

loc_00151B5E:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
