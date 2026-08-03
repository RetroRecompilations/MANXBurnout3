#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5910
 * Original: 0x001A5910 - 0x001A5C5D (845 bytes, 276 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5910:
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(edi + 0x40);
    if (TEST_Z(MEM8(eax + 0xC), 2)) goto loc_001A593A; /* je: equal / zero */

loc_001A5934:
    SET_LO8(eax, 6);
    SET_LO8(ecx, 7);
    goto loc_001A593E;

loc_001A593A:
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(ecx, 6);

loc_001A593E:
    /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x28) = LO8(ecx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_AE(LO8(eax), LO8(ecx))) goto loc_001A59D9; /* jae: above or equal (unsigned >=) */

loc_001A594C:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    esi = ZX8(LO8(eax));
    goto loc_001A5960;

    /* nop */

loc_001A5960:
    edx = MEM32(edi + ebp * 4 + 0x10);
    xmm2.f[0] = MEMF(edx + esi * 4); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_001A59D2; /* jbe: below or equal (unsigned <=) */

loc_001A596E:
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax + esi;
    /* comiss xmm0.f[0], MEMF(edi + eax * 4 + 0x9C) - sets EFLAGS */
    eax = edi + eax * 4 + 0x9C;
    MEM32(esp + 0x14) = eax;
    if ((xmm0.f[0] <= MEMF(edi + eax * 4 + 0x9C))) goto loc_001A59D2; /* jbe: below or equal (unsigned <=) */

loc_001A598A:
    edx = ebp + ebp * 4;
    eax = edi + edx * 4;
    if (CMP_GE(MEM32(eax + 0x48), 2)) goto loc_001A59D2; /* jge: greater or equal (signed >=) */

loc_001A5997:
    ecx = MEM32(eax + 0x54);
    edx = MEM32(eax + 0x44);
    MEM8(ecx + edx) = LO8(ebx);
    ecx = MEM32(eax + 0x54);
    edx = MEM32(eax + 0x48);
    ecx++;
    edx++;
    MEM32(eax + 0x48) = edx;
    /* cmp ecx, MEM32(eax + 0x4C) - flags set for next jcc */
    MEM32(eax + 0x54) = ecx;
    if (CMP_L(ecx, MEM32(eax + 0x4C))) goto loc_001A59BA; /* jl: less (signed <) */

loc_001A59B3:
    MEM32(eax + 0x54) = 0;

loc_001A59BA:
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    edx = edi;
    PUSH32(esp, 0); sub_001A5DC0(); /* call 0x001A5DC0 */

loc_001A59C8:
    ecx = MEM32(esp + 0x14);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(ecx, MEM8(esp + 0x28));

loc_001A59D2:
    SET_LO8(ebx, LO8(ebx) + 1);
    esi++;
    if (CMP_B(LO8(ebx), LO8(ecx))) goto loc_001A5960; /* jb: below (unsigned <) */

loc_001A59D9:
    ecx = MEM32(edi + 0x40);
    edx = MEM32(ecx + 4);
    SET_LO16(eax, MEM16(edx + ebp * 4));
    SET_LO16(eax, LO16(eax) + MEM16(esp + 0x30));
    edx = ZX16(LO16(eax));
    eax = MEM32(ecx);
    /* cmp MEM32(eax + ebp * 4), 0xFF - flags set for next jcc */
    MEM32(esp + 0x28) = edx;
    if (CMP_NE(MEM32(eax + ebp * 4), 0xFF)) goto loc_001A59FE; /* jne: not equal / not zero */

loc_001A59FA:
    eax = 0; /* xor self */
    goto loc_001A5A0E;

loc_001A59FE:
    ecx = MEM32(edi + 0x40);
    eax = MEM32(ecx);
    eax = MEM32(eax + ebp * 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_001A5A0E:
    ecx = MEM32(eax);
    if (CMP_GE(edx, MEM32(ecx + 0x10))) goto loc_001A5C59; /* jge: greater or equal (signed >=) */

loc_001A5A19:
    if (TEST_NZ(edx, edx)) goto loc_001A5A27; /* jne: not equal / not zero */

loc_001A5A1D:
    SET_LO8(ecx, MEM8(edi + 0x114));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A5A71; /* jne: not equal / not zero */

loc_001A5A27:
    SET_LO16(eax, MEM16(eax + 4));
    SET_LO8(ecx, MEM8(0x649B99));
    SET_LO16(eax, LO16(eax) + LO16(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A5A71; /* je: equal / zero */

loc_001A5A38:
    ecx = ZX16(LO16(eax));
    edx = ecx;
    edx = edx >> 2;
    SET_LO8(eax, MEM8(edx + 0x498D80));
    edx = MEM32(esp + 0x2C);
    /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001A5A5C; /* jns: not sign (positive) */

loc_001A5A57:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A5A5C:
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    /* test LO8(eax), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A5C59; /* jne: not equal / not zero */

loc_001A5A71:
    eax = ebp + ebp * 4;
    ecx = MEM32(edi + eax * 4 + 0x48);
    /* test ecx, ecx - flags set for next jcc */
    eax = edi + eax * 4;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A5C59; /* jle: less or equal (signed <=) */

loc_001A5A84:
    edx = MEM32(eax + 0x50);
    ecx = MEM32(eax + 0x44);
    esi = MEM32(eax + 0x48);
    ebx = MEM32(eax + 0x4C);
    ecx = ecx + edx;
    esi--;
    MEM32(eax + 0x48) = esi;
    esi = edx + 1;
    edx = 0; /* xor self */
    /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_GE(esi, ebx)) ? 1 : 0); /* setge */
    edx--;
    edx = edx & esi;
    MEM32(eax + 0x50) = edx;
    esi = MEM32(edi + 0x40);
    /* test MEM8(esi + 0xC), 2 - flags set for next jcc */
    ebx = ZX8(MEM8(ecx));
    if (TEST_Z(MEM8(esi + 0xC), 2)) goto loc_001A5B19; /* je: equal / zero */

loc_001A5AB2:
    eax = edi;
    PUSH32(esp, 0); sub_001A5F40(); /* call 0x001A5F40 */

loc_001A5AB9:
    SET_LO8(ebx, MEM8(esi + 0xD));
    /* test LO8(ebx), 1 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    if (TEST_Z(LO8(ebx), 1)) goto loc_001A5AD5; /* je: equal / zero */

loc_001A5AC9:
    ebx = 6;
    MEM8(esp + 0x30) = 0;
    goto loc_001A5B38;

loc_001A5AD5:
    if (TEST_Z(LO8(ebx), 2)) goto loc_001A5AE6; /* je: equal / zero */

loc_001A5ADA:
    ebx = 7;
    MEM8(esp + 0x30) = 0;
    goto loc_001A5B38;

loc_001A5AE6:
    if (TEST_Z(LO8(ebx), 4)) goto loc_001A5AF7; /* je: equal / zero */

loc_001A5AEB:
    ebx = 8;
    MEM8(esp + 0x30) = 0;
    goto loc_001A5B38;

loc_001A5AF7:
    if (TEST_Z(LO8(ebx), 8)) goto loc_001A5B08; /* je: equal / zero */

loc_001A5AFC:
    ebx = 9;
    MEM8(esp + 0x30) = 0;
    goto loc_001A5B38;

loc_001A5B08:
    SET_LO8(ebx, LO8(ebx) & 0x10);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    MEM8(esp + 0x30) = 0;
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0xA;
    goto loc_001A5B38;

loc_001A5B19:
    ecx = ebx;
    PUSH32(esp, 0); sub_001A5E30(); /* call 0x001A5E30 */

loc_001A5B20:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0); sub_001A5F90(); /* call 0x001A5F90 */

loc_001A5B34:
    MEM8(esp + 0x30) = LO8(eax);

loc_001A5B38:
    if (CMP_NE(ebx, 4)) goto loc_001A5B69; /* jne: not equal / not zero */

loc_001A5B3D:
    ecx = 0xB;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0); sub_001A5E30(); /* call 0x001A5E30 */

loc_001A5B4B:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0); sub_001A5F90(); /* call 0x001A5F90 */

loc_001A5B5F:
    ecx = MEM32(esp + 0x34);
    MEM8(esp + 0x10) = LO8(eax);
    goto loc_001A5B6B;

loc_001A5B69:
    ecx = 0; /* xor self */

loc_001A5B6B:
    eax = MEM32(edi + ebp * 4);
    xmm0.f[0] = MEMF(eax); /* movss */
    edx = MEM32(edi + 0x40);
    eax = MEM32(edx);
    eax = MEM32(eax + ebp * 4);
    /* cmp eax, 0xFF - flags set for next jcc */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_NE(eax, 0xFF)) goto loc_001A5B8B; /* jne: not equal / not zero */

loc_001A5B87:
    eax = 0; /* xor self */
    goto loc_001A5B93;

loc_001A5B8B:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_001A5B93:
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x28); /* cvtsi2ss */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(edi + ebp * 4 + 0x10);
    edx = MEM32(edx + ebx * 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x6137E0);
    PUSH32(esp, 0); sub_001A2B20(); /* call 0x001A2B20 */

loc_001A5BD9:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001A5C59; /* je: equal / zero */

loc_001A5BDF:
    if (TEST_NZ(MEM8(esi + 0x174), 4)) goto loc_001A5C59; /* jne: not equal / not zero */

loc_001A5BE8:
    edx = MEM32(edi + ebp * 4 + 0x20);
    ecx = MEM32(esi + 0x114);
    eax = MEM32(edx + 0x10);
    ecx = ecx + 0x47;
    if (CMP_G(eax & eax, 0)) goto loc_001A5C14; /* jg: greater (signed >) */

loc_001A5BFC:
    MEM8(ecx) = 0xFF;
    ecx = MEM32(esi + 0x114);
    edi = 0; /* xor self */
    MEM32(ecx + 0x38) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_001A5C14:
    SET_LO8(eax, MEM8(edi + ebp + 0x10C));
    MEM8(ecx) = LO8(eax);
    SET_LO8(edx, MEM8(edi + ebp + 0x10C));
    SET_LO8(edx, LO8(edx) + 1);
    SET_LO8(eax, LO8(edx));
    eax = ZX8(LO8(eax));
    MEM8(edi + ebp + 0x10C) = LO8(edx);
    ebx = MEM32(edi + ebp * 4 + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + 0x10))); }
    MEM8(edi + ebp + 0x10C) = LO8(edx);
    eax = MEM32(edi + ebp * 4 + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_001A5C4C; /* jne: not equal / not zero */

loc_001A5C49:
    MEM8(ecx) = 0xFF;

loc_001A5C4C:
    edi = MEM32(edi + ebp * 4 + 0x20);
    ecx = MEM32(esi + 0x114);
    MEM32(ecx + 0x38) = edi;

loc_001A5C59:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
