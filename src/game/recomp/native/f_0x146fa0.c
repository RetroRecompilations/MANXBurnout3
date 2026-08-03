#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00146FA0
 * Original: 0x00146FA0 - 0x001476F7 (1879 bytes, 458 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00146FA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    eax = MEM32(edi);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001476EF; /* je: equal / zero */

loc_00146FB5:
    SET_LO8(ecx, MEM8(edi + 0x124));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001476EF; /* je: equal / zero */

loc_00146FC3:
    ecx = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xA0), 16); /* movaps */
    PUSH32(esp, ecx);
    ebx = edi + 0xE4;
    eax = edi + 0xE0;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = edi;
    memcpy((void *)XBOX_PTR(edi + 0xB0), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001489B0(); /* call 0x001489B0 */

loc_00146FEA:
    eax = MEM32(edi + 0x120);
    if (CMP_EQ(eax, 5)) goto loc_00146FFA; /* je: equal / zero */

loc_00146FF5:
    if (CMP_NE(eax, 4)) goto loc_00147016; /* jne: not equal / not zero */

loc_00146FFA:
    eax = MEM32(edi + 0xC4);
    if (TEST_NZ(eax, eax)) goto loc_0014700C; /* jne: not equal / not zero */

loc_00147004:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00147F90(); /* call 0x00147F90 */

loc_0014700A:
    goto loc_00147016;

loc_0014700C:
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    esi = edi;
    PUSH32(esp, 0); sub_00148820(); /* call 0x00148820 */

loc_00147016:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x12C);
    ecx = MEM32(edi);
    eax = eax + eax * 2;
    eax = eax << 4;
    esi = MEM32(eax + 0x64B38C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x90), 16); /* movaps */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0014704C:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0014706A; /* jbe: below or equal (unsigned <=) */

loc_00147059:
    edx = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    goto loc_00147073;

loc_0014706A:
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_00147073:
    eax = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0014709F:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001470AC; /* jne: not equal / not zero */

loc_001470A3:
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_001470AC:
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_001470B5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001470C2; /* jne: not equal / not zero */

loc_001470B9:
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_000FF030(); /* call 0x000FF030 */

loc_001470C2:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x30) (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0x18;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x70) (packed 4xfloat) */
    eax = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0014712B:
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > MEMF(0x3B16E0))) goto loc_001474A9; /* ja: above (unsigned >) */

loc_00147144:
    eax = MEM32(edi + 0xC8);
    if (TEST_NZ(eax, eax)) goto loc_00147204; /* jne: not equal / not zero */

loc_00147152:
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMD(0x3B1DD0)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001474A9; /* jbe: below or equal (unsigned <=) */

loc_00147166:
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001471B6; /* jbe: below or equal (unsigned <=) */

loc_00147173:
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_push(MEMD(0x3B1DC8)); /* fld double */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001471B6; /* jbe: below or equal (unsigned <=) */

loc_00147183:
    ecx = MEM32(edi + 0x114);
    if (TEST_NZ(LO8(ecx), 8)) goto loc_001471B6; /* jne: not equal / not zero */

loc_0014718E:
    eax = MEM32(edi + 0x120);
    if (CMP_EQ(eax, 5)) goto loc_001471AD; /* je: equal / zero */

loc_00147199:
    if (CMP_EQ(eax, 2)) goto loc_001471AD; /* je: equal / zero */

loc_0014719E:
    if (CMP_EQ(eax, 3)) goto loc_001471AD; /* je: equal / zero */

loc_001471A3:
    if (CMP_EQ(eax, 4)) goto loc_001471AD; /* je: equal / zero */

loc_001471A8:
    if (CMP_NE(eax, 1)) goto loc_001471B6; /* jne: not equal / not zero */

loc_001471AD:
    ecx = ecx | 8;
    MEM32(edi + 0x114) = ecx;

loc_001471B6:
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001474A9; /* jbe: below or equal (unsigned <=) */

loc_001471C7:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00148080(); /* call 0x00148080 */

loc_001471CD:
    eax = 0x40FBB8;
    MEM8(edi + 0x126) = 1;
    MEM8(edi + 0x12A) = 0;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001471E5:
    ecx = MEM32(0x40FC74);
    esi = MEM32(0x40FC7C);
    esi = esi - ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(edi + 0x12B) = LO8(edx);
    goto loc_001474A9;

loc_00147204:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    eax = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00147219:
    /* comiss xmm0.f[0], MEMF(0x3B16B4) - sets EFLAGS */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    if ((xmm0.f[0] <= MEMF(0x3B16B4))) goto loc_001472AE; /* jbe: below or equal (unsigned <=) */

loc_00147229:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2928); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm3.f[0] = MEMF(ebp + 8); /* movss */
    /* comiss xmm3.f[0], MEMF(0x3B1684) - sets EFLAGS */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    if ((xmm3.f[0] <= MEMF(0x3B1684))) goto loc_00147296; /* jbe: below or equal (unsigned <=) */

loc_0014728C:
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00147296:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x40FC6C); /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001472B7; /* jbe: below or equal (unsigned <=) */

loc_001472A9:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    goto loc_001472B1;

loc_001472AE:
    xmm1.f[0] = 0.0f; /* xorps self = zero */

loc_001472B1:
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_001472B7:
    ecx = MEM32(edi + 0x114);
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_00147476; /* jne: not equal / not zero */

loc_001472C6:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1694) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1694))) goto loc_00147476; /* jbe: below or equal (unsigned <=) */

loc_001472D9:
    SET_LO8(eax, MEM8(edi + 0x12B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014739A; /* je: equal / zero */

loc_001472E7:
    xmm0.f[0] = MEMF(edi + 0xD8); /* movss */
    SET_LO8(eax, LO8(eax) - 1);
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    MEM8(edi + 0x12B) = LO8(eax);
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_00147319; /* jbe: below or equal (unsigned <=) */

loc_001472FC:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1730); /* subss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edi + 0xD8) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00147319; /* jbe: below or equal (unsigned <=) */

loc_00147311:
    MEMF(edi + 0xD8) = xmm2.f[0]; /* movss */

loc_00147319:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(edi + 0xD8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_00147476; /* jg: greater (signed >) */

loc_0014732F:
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_00147371; /* je: equal / zero */

loc_00147334:
    SET_LO8(eax, MEM8(edi + 0x127));
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x128);
    edx = SX8(LO8(eax));
    ecx = ecx << 4;
    SET_LO8(ecx, MEM8(ecx + edx + 0x39C780));
    MEM8(edi + 0x12A) = LO8(ecx);

loc_00147354:
    SET_LO8(eax, LO8(eax) + 1);
    edx = SX8(LO8(eax));
    edx = edx & 0x8000000Fu;
    if (((int32_t)edx >= 0)) goto loc_00147366; /* jns: not sign (positive) */

loc_00147361:
    edx--;
    edx = edx | 0xFFFFFFF0u;
    edx++;

loc_00147366:
    MEM8(edi + 0x127) = LO8(edx);
    goto loc_00147476;

loc_00147371:
    eax = 0x40FBB8;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_0014737B:
    ecx = MEM32(0x40FC70);
    esi = MEM32(0x40FC78);
    esi = esi - ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(edi + 0x12A) = LO8(edx);
    goto loc_00147473;

loc_0014739A:
    SET_LO8(eax, MEM8(edi + 0x12A));
    SET_LO8(edx, MEM8(edi + 0x126));
    SET_LO8(eax, LO8(eax) - 1);
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(edi + 0x12A) = LO8(eax);
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001473E9; /* je: equal / zero */

loc_001473B2:
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3895BC); /* mulss */
    /* comiss xmm1.f[0], MEMF(edi + 0xD8) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(edi + 0xD8))) goto loc_00147413; /* jb: below (unsigned <) */

loc_001473C3:
    xmm0.f[0] = MEMF(edi + 0xD8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1730); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(edi + 0xD8) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00147413; /* jbe: below or equal (unsigned <=) */

loc_001473E0:
    MEM8(edi + 0x126) = 0;
    goto loc_0014740B;

loc_001473E9:
    xmm0.f[0] = MEMF(edi + 0xD8); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00147413; /* jb: below (unsigned <) */

loc_001473F6:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A69BC); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edi + 0xD8) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00147413; /* jbe: below or equal (unsigned <=) */

loc_0014740B:
    MEMF(edi + 0xD8) = xmm1.f[0]; /* movss */

loc_00147413:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(edi + 0xD8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_G(LO8(eax) & LO8(eax), 0)) goto loc_00147476; /* jg: greater (signed >) */

loc_00147425:
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_0014744F; /* je: equal / zero */

loc_0014742A:
    SET_LO8(eax, MEM8(edi + 0x127));
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x128);
    edx = SX8(LO8(eax));
    ecx = ecx << 4;
    SET_LO8(ecx, MEM8(ecx + edx + 0x39C780));
    MEM8(edi + 0x12B) = LO8(ecx);
    goto loc_00147354;

loc_0014744F:
    eax = 0x40FBB8;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_00147459:
    ecx = MEM32(0x40FC74);
    esi = MEM32(0x40FC7C);
    esi = esi - ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(edi + 0x12B) = LO8(edx);

loc_00147473:
    xmm2.f[0] = 0.0f; /* xorps self = zero */

loc_00147476:
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    MEM8(esp + 0x17) = 0;
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0014748B; /* jbe: below or equal (unsigned <=) */

loc_00147486:
    MEM8(esp + 0x17) = 1;

loc_0014748B:
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = edi;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001481A0(); /* call 0x001481A0 */

loc_001474A9:
    if (CMP_NE(MEM32(edi + 0x120), 7)) goto loc_001476B0; /* jne: not equal / not zero */

loc_001474B6:
    eax = MEM32(edi + 0xC4);
    /* test eax, eax - flags set for next jcc */
    esi = edi + 0xC4;
    if (TEST_NZ(eax, eax)) goto loc_001474FB; /* jne: not equal / not zero */

loc_001474C6:
    eax = MEM32(edi + 0x108);
    ecx = MEM32(0x3EC2B8);
    edx = MEM32(0x3EC2B4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(0x3EC2B0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00148520(); /* call 0x00148520 */

loc_001474EE:
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x14);
    MEM32(edi + 0x11C) = edx;
    goto loc_00147517;

loc_001474FB:
    ecx = MEM32(0x3EC2B0);
    esi = MEM32(edi + 0xD0);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x108);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_001486D0(); /* call 0x001486D0 */

loc_00147517:
    esi = MEM32(edi + 0xC0);
    /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x129));
    ebx = edi + 0xC0;
    if (TEST_NZ(esi, esi)) goto loc_001475D3; /* jne: not equal / not zero */

loc_00147531:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014761E; /* jne: not equal / not zero */

loc_00147539:
    if (TEST_Z(MEM8(edi + 0x114), 4)) goto loc_0014761E; /* je: equal / zero */

loc_00147546:
    eax = 0x40FBB8;
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_00147550:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x40FBB8;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(edi + 0x100) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00048760(); /* call 0x00048760 */

loc_0014756C:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(edi + 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    edx = MEM32(esp + 0x34);
    MEMF(edi + 0x104) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(0x3EC2B8);
    ecx = MEM32(0x3EC2B4);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00148520(); /* call 0x00148520 */

loc_001475A8:
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x14);
    eax = 0x40FBB8;
    MEM32(edi + 0x118) = ecx;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001475BD:
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x3EC2BC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x3EC2BC)); }
    SET_LO8(edx, LO8(edx) + MEM8(0x3EC2A0));
    MEM8(edi + 0x129) = LO8(edx);
    goto loc_0014761E;

loc_001475D3:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00147602; /* jne: not equal / not zero */

loc_001475D7:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001475DC:
    eax = 0x40FBB8;
    MEM32(ebx) = 0;
    PUSH32(esp, 0); sub_00015510(); /* call 0x00015510 */

loc_001475EC:
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x3EC2C0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x3EC2C0)); }
    SET_LO8(edx, LO8(edx) + MEM8(0x3EC2A4));
    MEM8(edi + 0x129) = LO8(edx);
    goto loc_0014761E;

loc_00147602:
    edx = MEM32(edi + 0x100);
    eax = MEM32(edi + 0x104);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_001486D0(); /* call 0x001486D0 */

loc_0014761E:
    SET_LO8(edx, MEM8(edi + 0x129));
    eax = MEM32(edi + 0x114);
    xmm0.f[0] = MEMF(edi + 0x108); /* movss */
    SET_LO8(edx, LO8(edx) - 1);
    /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(edi + 0x129) = LO8(edx);
    if (TEST_Z(LO8(eax), 1)) goto loc_00147677; /* je: equal / zero */

loc_0014763E:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3EC29C); /* addss */
    MEMF(edi + 0x108) = xmm0.f[0]; /* movss */
    /* comiss xmm0.f[0], MEMF(0x3EC294) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3EC294))) goto loc_001476E4; /* jb: below (unsigned <) */

loc_0014765B:
    eax = eax & 0xFFFFFFFEu;
    MEM32(edi + 0x114) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00147DF0(); /* call 0x00147DF0 */

loc_0014766F:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00147677:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3EC29C); /* subss */
    MEMF(edi + 0x108) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC298); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_001476E4; /* jb: below (unsigned <) */

loc_00147694:
    eax = eax | 1;
    MEM32(edi + 0x114) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00147DF0(); /* call 0x00147DF0 */

loc_001476A8:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001476B0:
    eax = MEM32(edi + 0xC0);
    if (TEST_NZ(eax, eax)) goto loc_001476D3; /* jne: not equal / not zero */

loc_001476BA:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00147EA0(); /* call 0x00147EA0 */

loc_001476C0:
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00147DF0(); /* call 0x00147DF0 */

loc_001476CB:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001476D3:
    ecx = MEM32(ebx);
    edx = MEM32(edi + 0xE0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_00148400(); /* call 0x00148400 */

loc_001476E4:
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_00147DF0(); /* call 0x00147DF0 */

loc_001476EF:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
