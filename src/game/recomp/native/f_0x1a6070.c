#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6070
 * Original: 0x001A6070 - 0x001A658A (1306 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A6070:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM8(esp + 0x24) = LO8(eax);
    eax = MEM32(ecx);
    eax = MEM32(eax + ebx * 4);
    if (CMP_NE(eax, 0xFF)) goto loc_001A60A1; /* jne: not equal / not zero */

loc_001A6099:
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    goto loc_001A60AD;

loc_001A60A1:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    MEM32(esp + 0x14) = eax;

loc_001A60AD:
    if (TEST_NZ(MEM8(ecx + 0xC), 2)) goto loc_001A6586; /* jne: not equal / not zero */

loc_001A60B7:
    if (CMP_GE(esi, edx)) goto loc_001A60C5; /* jge: greater or equal (signed >=) */

loc_001A60BB:
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = edx;
    goto loc_001A60CD;

loc_001A60C5:
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = esi;

loc_001A60CD:
    SET_LO8(ecx, MEM8(ebp + 0x14));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A6169; /* je: equal / zero */

loc_001A60D8:
    ecx = ZX16(MEM16(eax + 4));
    esi = MEM32(0x649B7C);
    edx = MEM32(esp + 0xC);
    ecx = ecx + esi;
    SET_LO8(ecx, MEM8(ecx + edx));
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001A60FB; /* jne: not equal / not zero */

loc_001A60F0:
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x46));
    edx--;
    goto loc_001A6112;

loc_001A60FB:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    edx = (int32_t)MEMF(ecx + 0x30); /* cvttss2si */
    SET_LO8(ecx, MEM8(ecx + 0x45));

loc_001A6112:
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A612A; /* je: equal / zero */

loc_001A6117:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    if (TEST_NZ(ecx, ecx)) goto loc_001A612E; /* jne: not equal / not zero */

loc_001A612A:
    esi = 0; /* xor self */
    goto loc_001A6133;

loc_001A612E:
    esi = (int32_t)MEMF(ecx + 0x30); /* cvttss2si */

loc_001A6133:
    if (CMP_GE(edx, MEM32(esp + 0x10))) goto loc_001A6140; /* jge: greater or equal (signed >=) */

loc_001A6139:
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    goto loc_001A616E;

loc_001A6140:
    eax = MEM32(esp + 0xC);
    ecx = edx;
    ecx = ecx - MEM32(esp + 0x10);
    eax = eax - esi;
    /* cmp ecx, eax - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    if (CMP_L(ecx, eax)) goto loc_001A6172; /* jl: less (signed <) */

loc_001A6159:
    edx = MEM32(esp + 0x10);
    xmm1.f[0] = MEMF(ecx + edx * 8); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + esi * 8); /* subss */
    goto loc_001A6180;

loc_001A6169:
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 4);

loc_001A616E:
    edx = MEM32(esp + 0x10);

loc_001A6172:
    xmm1.f[0] = MEMF(ecx + edx * 8); /* movss */
    edx = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + edx * 8); /* subss */

loc_001A6180:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(edi + ebx * 4 + 0x10);
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    edx = 6;
    /* nop */

loc_001A6190:
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_001A6190; /* jne: not equal / not zero */

loc_001A619A:
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    if ((xmm0.f[0] >= xmm3.f[0])) goto loc_001A6586; /* jae: above or equal (unsigned >=) */

loc_001A61A9:
    ecx = MEM32(edi + ebx * 4);
    xmm2.f[0] = MEMF(ecx); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A5958); /* mulss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] >= xmm2.f[0])) goto loc_001A6586; /* jae: above or equal (unsigned >=) */

loc_001A61C1:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1838); /* mulss */
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] > xmm0.f[0])) goto loc_001A6586; /* ja: above (unsigned >) */

loc_001A61E5:
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A6586; /* jle: less or equal (signed <=) */

loc_001A620B:
    xmm3.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm4.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    esi = MEM32(0x649B28);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    goto loc_001A6240;

loc_001A622B:
    xmm3.f[0] = MEMF(esp + 0x20); /* movss */
    xmm4.f[0] = MEMF(esp + 0x2C); /* movss */
    eax = MEM32(esp + 0x14);
    goto loc_001A6240;

    /* nop */

loc_001A6240:
    SET_LO8(ecx, MEM8(0x649B97));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A629E; /* jne: not equal / not zero */

loc_001A624A:
    SET_LO8(ecx, MEM8(0x649B98));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A629E; /* jne: not equal / not zero */

loc_001A6254:
    edx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    ecx = MEM32(0x649B2C);
    esi = esi << 0x10;
    esi = esi + edx;
    esi = esi + ecx;
    ecx = ecx + esi;
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x34) = esi;
    MEM32(0x649B28) = esi;
    MEM32(0x649B2C) = ecx;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_001A6288; /* jge: greater or equal (signed >=) */

loc_001A6282:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A6288:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    goto loc_001A62A4;

loc_001A629E:
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */

loc_001A62A4:
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, 0); sub_0019E160(); /* call 0x0019E160 */

loc_001A62B3:
    eax = (uint32_t)(int32_t)SMEM16(0x649B2A);
    esi = esi << 0x10;
    esi = esi + eax;
    eax = MEM32(0x649B2C);
    esi = esi + eax;
    eax = eax + esi;
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x34) = esi;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    MEM32(0x649B28) = esi;
    MEM32(0x649B2C) = eax;
    if (CMP_GE(esi & esi, 0)) goto loc_001A62EF; /* jge: greater or equal (signed >=) */

loc_001A62E9:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A62EF:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001A6324; /* jbe: below or equal (unsigned <=) */

loc_001A6319:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_001A632A;

loc_001A6324:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */

loc_001A632A:
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm4.f[0])) goto loc_001A6338; /* jbe: below or equal (unsigned <=) */

loc_001A632F:
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_001A6338:
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    edx = edi;
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, 0); sub_001A6610(); /* call 0x001A6610 */

loc_001A6348:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A6571; /* je: equal / zero */

loc_001A6350:
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    edx = ebx;
    esi = edi;
    PUSH32(esp, 0); sub_001A6590(); /* call 0x001A6590 */

loc_001A635E:
    ecx = MEM32(edi + 0x40);
    esi = eax;
    /* test MEM8(ecx + 0xC), 2 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(MEM8(ecx + 0xC), 2)) goto loc_001A6383; /* je: equal / zero */

loc_001A636D:
    eax = edi;
    PUSH32(esp, 0); sub_001A5F40(); /* call 0x001A5F40 */

loc_001A6374:
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = edx;
    MEM8(esp + 0x28) = 0;
    goto loc_001A63A6;

loc_001A6383:
    ecx = esi;
    PUSH32(esp, 0); sub_001A5E30(); /* call 0x001A5E30 */

loc_001A638A:
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    esi = eax;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = ecx;
    PUSH32(esp, 0); sub_001A5F90(); /* call 0x001A5F90 */

loc_001A639E:
    esi = MEM32(esp + 0x10);
    MEM8(esp + 0x28) = LO8(eax);

loc_001A63A6:
    if (CMP_NE(esi, 4)) goto loc_001A63DB; /* jne: not equal / not zero */

loc_001A63AB:
    ecx = 0xB;
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0); sub_001A5E30(); /* call 0x001A5E30 */

loc_001A63B9:
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    esi = eax;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, 0); sub_001A5F90(); /* call 0x001A5F90 */

loc_001A63CD:
    esi = MEM32(esp + 0x10);
    MEM8(esp + 0x24) = LO8(eax);
    eax = MEM32(esp + 0x34);
    goto loc_001A63DD;

loc_001A63DB:
    eax = 0; /* xor self */

loc_001A63DD:
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(edi + ebx * 4 + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + esi * 4);
    edx = MEM32(edi + ebx * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x6137E0);
    PUSH32(esp, 0); sub_001A2B20(); /* call 0x001A2B20 */

loc_001A6421:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_001A6586; /* je: equal / zero */

loc_001A642B:
    ecx = MEM32(edi + ebx * 4 + 0x20);
    eax = MEM32(esi + 0x114);
    edx = MEM32(ecx + 0x10);
    eax = eax + 0x47;
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x34) = eax;
    if (CMP_G(edx & edx, 0)) goto loc_001A644A; /* jg: greater (signed >) */

loc_001A6443:
    MEM8(eax) = 0xFF;
    eax = 0; /* xor self */
    goto loc_001A648A;

loc_001A644A:
    SET_LO8(edx, MEM8(ebx + edi + 0x10C));
    MEM8(eax) = LO8(edx);
    SET_LO8(ecx, MEM8(ebx + edi + 0x10C));
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(ecx));
    eax = ZX8(LO8(eax));
    MEM8(ebx + edi + 0x10C) = LO8(ecx);
    ecx = MEM32(edi + ebx * 4 + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x10)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x10))); }
    MEM8(ebx + edi + 0x10C) = LO8(edx);
    eax = MEM32(edi + ebx * 4 + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_001A6486; /* jne: not equal / not zero */

loc_001A647F:
    edx = MEM32(esp + 0x34);
    MEM8(edx) = 0xFF;

loc_001A6486:
    eax = MEM32(edi + ebx * 4 + 0x20);

loc_001A648A:
    ecx = MEM32(esi + 0x114);
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(edi + ebx * 4);
    eax = MEM32(esi + 0x114);
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x114);
    ecx = MEM32(eax + 0x38);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x34) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_001A64E5; /* jne: not equal / not zero */

loc_001A64B1:
    SET_LO8(eax, MEM8(0x649B97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A64E5; /* jne: not equal / not zero */

loc_001A64BA:
    SET_LO8(eax, MEM8(0x649B98));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A64E5; /* jne: not equal / not zero */

loc_001A64C3:
    eax = 0x649B28;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_001A64CD:
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = MEM32(esp + 0x34);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */

loc_001A64E5:
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A656B; /* jle: less or equal (signed <=) */

loc_001A64EE:
    memcpy(xmm2.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    ecx = MEM32(ebp + 0xC);

loc_001A64F8:
    edx = MEM32(ecx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = esp + 0x38;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A49FC); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x38) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x38))) goto loc_001A6564; /* ja: above (unsigned >) */

loc_001A6557:
    edx = MEM32(ebp + 0x10);
    eax++;
    ecx = ecx + 0x10;
    if (CMP_L(eax, edx)) goto loc_001A64F8; /* jl: less (signed <) */

loc_001A6562:
    goto loc_001A656B;

loc_001A6564:
    ecx = esi;
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A656B:
    esi = MEM32(0x649B28);

loc_001A6571:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x3C);
    eax++;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, ecx)) goto loc_001A622B; /* jl: less (signed <) */

loc_001A6586:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
