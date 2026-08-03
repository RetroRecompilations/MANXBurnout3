#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A68D0
 * Original: 0x001A68D0 - 0x001A6A2B (347 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A68D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A68D0:
    esp = esp - 0x10;
    eax = MEM32(0x649B7C);
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    eax = MEM32(edx + esi * 4);
    /* cmp eax, 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_NE(eax, 0xFF)) goto loc_001A68F5; /* jne: not equal / not zero */

loc_001A68ED:
    ebx = 0; /* xor self */
    MEM32(esp + 8) = ebx;
    goto loc_001A6903;

loc_001A68F5:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    MEM32(esp + 8) = eax;
    ebx = eax;

loc_001A6903:
    MEM8(esi + edi + 0x10C) = 0;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(eax + 4);
    ebp = MEM32(ecx + esi * 4);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019E640(); /* call 0x0019E640 */

loc_001A6925:
    if (TEST_NZ(eax, eax)) goto loc_001A6931; /* jne: not equal / not zero */

loc_001A6929:
    ecx = MEM32(ebx);
    edx = MEM32(ecx + 0x10);
    edx--;
    goto loc_001A6935;

loc_001A6931:
    edx = MEM32(esp + 0x10);

loc_001A6935:
    eax = ZX16(MEM16(ebx + 4));
    ecx = MEM32(esp + 0xC);
    eax = eax + ebp;
    SET_LO8(ebx, MEM8(eax + ecx));
    if (CMP_EQ(LO8(ebx), 0xFF)) goto loc_001A6A25; /* je: equal / zero */

loc_001A694B:
    eax = ZX8(LO8(ebx));
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if ((ecx == 0)) goto loc_001A6A25; /* je: equal / zero */

loc_001A6960:
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    /* nop */

loc_001A6970:
    xmm0.f[0] = MEMF(ecx + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x10))) goto loc_001A6A25; /* ja: above (unsigned >) */

loc_001A6980:
    SET_LO8(eax, MEM8(ecx + 0x48));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A69E0; /* jne: not equal / not zero */

loc_001A6987:
    edx = MEM32(edi + esi * 4 + 0x20);
    eax = MEM32(edx + 0x10);
    if (CMP_G(eax & eax, 0)) goto loc_001A699D; /* jg: greater (signed >) */

loc_001A6992:
    eax = 0; /* xor self */
    MEM8(ecx + 0x47) = 0xFF;
    MEM32(ecx + 0x38) = eax;
    goto loc_001A69EB;

loc_001A699D:
    SET_LO8(eax, MEM8(esi + edi + 0x10C));
    MEM8(ecx + 0x47) = LO8(eax);
    SET_LO8(edx, MEM8(esi + edi + 0x10C));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(eax, LO8(edx));
    eax = ZX8(LO8(eax));
    MEM8(esi + edi + 0x10C) = LO8(edx);
    ebp = MEM32(edi + esi * 4 + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0x10))); }
    MEM8(esi + edi + 0x10C) = LO8(edx);
    eax = MEM32(edi + esi * 4 + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_001A69D7; /* jne: not equal / not zero */

loc_001A69D3:
    MEM8(ecx + 0x47) = 0xFF;

loc_001A69D7:
    eax = MEM32(edi + esi * 4 + 0x20);
    MEM32(ecx + 0x38) = eax;
    goto loc_001A69EB;

loc_001A69E0:
    MEM8(ecx + 0x47) = 0xFF;
    MEM32(ecx + 0x38) = 0;

loc_001A69EB:
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001A69F3:
    edx = MEM32(esp + 8);
    ecx = ZX16(LO16(eax));
    eax = ZX16(MEM16(edx + 4));
    ecx = ecx + MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(eax + ecx + 1));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A6A25; /* je: equal / zero */

loc_001A6A0A:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001A6A25; /* je: equal / zero */

loc_001A6A0E:
    SET_LO8(ebx, LO8(eax));
    eax = ZX8(LO8(eax));
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if ((ecx != 0)) goto loc_001A6970; /* jne: not equal / not zero */

loc_001A6A25:
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
