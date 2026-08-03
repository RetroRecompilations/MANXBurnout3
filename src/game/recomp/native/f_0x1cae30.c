#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CAE30
 * Original: 0x001CAE30 - 0x001CB1B1 (897 bytes, 296 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAE30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAE30:
    eax = MEM32(0x4A1EE8);
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    ecx = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    edx = MEM32(ebp + 0x14);
    MEM32(ebp + 4) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x31));
    eax++;
    MEM32(0x4A1EE8) = eax;
    SET_LO8(eax, MEM8(ebx + 0x44));
    SET_LO8(ecx, LO8(ecx) & 1);
    PUSH32(esp, esi);
    MEM8(ebp + 0x30) = LO8(eax);
    MEM8(ebp + 0x31) = LO8(ecx);
    esi = MEM32(ebx + 0x18);
    MEM32(ebp) = esi;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CAE70:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAE87; /* je: equal / zero */

loc_001CAE7A:
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CAE84:
    esp = esp + 8;

loc_001CAE87:
    eax = ZX8(MEM8(ebp + 0x30));
    edx = ZX8(MEM8(ebx + 0x45));
    eax = eax << 3;
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0020BDC0(); /* call 0x0020BDC0 */

loc_001CAEB8:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAED0; /* je: equal / zero */

loc_001CAEC2:
    ecx = ZX8(MEM8(ebx + 0x45));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BDC0(); /* call 0x0020BDC0 */

loc_001CAECD:
    esp = esp + 8;

loc_001CAED0:
    xmm0.f[0] = MEMF(ebx + 0x24); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B16E0))) goto loc_001CAEE6; /* jb: below (unsigned <) */

loc_001CAEDE:
    edx = MEM32(ebx + 0x24);
    MEM32(ebp + 0x10) = edx;
    goto loc_001CAEFF;

loc_001CAEE6:
    eax = MEM32(ebp);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001CAEFC; /* jge: greater or equal (signed >=) */

loc_001CAEF6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CAEFC:
    MEMF(ebp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */

loc_001CAEFF:
    fp_push(MEMF(0x4A1EEC)); /* fld float */
    eax = MEM32(ebp + 0x14);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAF1E:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAF32; /* je: equal / zero */

loc_001CAF28:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAF2F:
    esp = esp + 8;

loc_001CAF32:
    xmm0.f[0] = MEMF(ebx + 0x1C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_001CAF47; /* jb: below (unsigned <) */

loc_001CAF3F:
    ecx = MEM32(ebx + 0x1C);
    MEM32(ebp + 0xC) = ecx;
    goto loc_001CAF4C;

loc_001CAF47:
    MEMF(ebp + 0xC) = xmm1.f[0]; /* movss */

loc_001CAF4C:
    SET_LO8(eax, MEM8(ebx + 0x46));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ebp + 0x33) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CAF5E; /* je: equal / zero */

loc_001CAF56:
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    goto loc_001CAF6C;

loc_001CAF5E:
    xmm0.f[0] = MEMF(0x4A1EF0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */

loc_001CAF6C:
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001CAF7E; /* jbe: below or equal (unsigned <=) */

loc_001CAF76:
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    goto loc_001CAF97;

loc_001CAF7E:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_001CAF97; /* ja: above (unsigned >) */

loc_001CAF91:
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */

loc_001CAF97:
    esi = MEM32(esp + 0x40);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAFA5:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAFB9; /* je: equal / zero */

loc_001CAFAF:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAFB6:
    esp = esp + 8;

loc_001CAFB9:
    xmm0.f[0] = MEMF(ebx + 0x3C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CAFEA; /* jp: parity */

loc_001CAFCB:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC40(); /* call 0x0020BC40 */

loc_001CAFD9:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB00E; /* je: equal / zero */

loc_001CAFE3:
    PUSH32(esp, 0x41200000);
    goto loc_001CB005;

loc_001CAFEA:
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BC40(); /* call 0x0020BC40 */

loc_001CAFF7:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB00E; /* je: equal / zero */

loc_001CB001:
    ecx = MEM32(ebx + 0x3C);
    PUSH32(esp, ecx);

loc_001CB005:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC40(); /* call 0x0020BC40 */

loc_001CB00B:
    esp = esp + 8;

loc_001CB00E:
    xmm0.f[0] = MEMF(ebx + 0x38); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CB03F; /* jp: parity */

loc_001CB020:
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BC60(); /* call 0x0020BC60 */

loc_001CB02E:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB063; /* je: equal / zero */

loc_001CB038:
    PUSH32(esp, 0x42480000);
    goto loc_001CB05A;

loc_001CB03F:
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BC60(); /* call 0x0020BC60 */

loc_001CB04C:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB063; /* je: equal / zero */

loc_001CB056:
    edx = MEM32(ebx + 0x38);
    PUSH32(esp, edx);

loc_001CB05A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC60(); /* call 0x0020BC60 */

loc_001CB060:
    esp = esp + 8;

loc_001CB063:
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    esi = ebx + 0xC;
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CB0CC; /* jp: parity */

loc_001CB07C:
    xmm1.f[0] = MEMF(ebx + 0x10); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CB0CC; /* jp: parity */

loc_001CB08A:
    xmm1.f[0] = MEMF(ebx + 0x14); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CB0CC; /* jp: parity */

loc_001CB098:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(ebp + 0x14);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0020BC20(); /* call 0x0020BC20 */

loc_001CB0BB:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB0EA; /* je: equal / zero */

loc_001CB0C5:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    goto loc_001CB0E1;

loc_001CB0CC:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC20(); /* call 0x0020BC20 */

loc_001CB0D6:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB0EA; /* je: equal / zero */

loc_001CB0E0:
    PUSH32(esp, esi);

loc_001CB0E1:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC20(); /* call 0x0020BC20 */

loc_001CB0E7:
    esp = esp + 8;

loc_001CB0EA:
    if (CMP_EQ(MEM32(ebx + 0x40), 0xFFFFFFFFu)) goto loc_001CB15A; /* je: equal / zero */

loc_001CB0F0:
    ecx = MEM32(ebx + 0x18);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    esi = esi + 0x10;
    ecx = 7;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = ZX8(MEM8(esp + 0x2C));
    MEM32(esp + 0x44) = edx;
    eax = MEM32(esp + 0x28);
    /* test eax, eax - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    /* FPU: fdivr dword ptr [0x3b16b0] */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001CB12A; /* jge: greater or equal (signed >=) */

loc_001CB124:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CB12A:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CB131:
    ecx = MEM32(ebx + 0x40);
    /* cmp ecx, eax - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_AE(ecx, eax)) goto loc_001CB15A; /* jae: above or equal (unsigned >=) */

loc_001CB139:
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CB143:
    eax = MEM32(ebp + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CB15A; /* je: equal / zero */

loc_001CB14D:
    edx = MEM32(ebx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BD30(); /* call 0x0020BD30 */

loc_001CB157:
    esp = esp + 8;

loc_001CB15A:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC00(); /* call 0x0020BC00 */

loc_001CB164:
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020C290(); /* call 0x0020C290 */

loc_001CB16F:
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB17A:
    eax = MEM32(ebp + 0x20);
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_001CB1A4; /* je: equal / zero */

loc_001CB184:
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC00(); /* call 0x0020BC00 */

loc_001CB18B:
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020C290(); /* call 0x0020C290 */

loc_001CB196:
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB1A1:
    esp = esp + 0x18;

loc_001CB1A4:
    POP32(esp, esi);
    MEM8(ebp + 0x2E) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
