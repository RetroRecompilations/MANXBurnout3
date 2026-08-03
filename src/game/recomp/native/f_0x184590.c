#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00184590
 * Original: 0x00184590 - 0x00184AC3 (1331 bytes, 324 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00184590:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    edi = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_001845B6:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    esi = esp + 0x24;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0017E550(); /* call 0x0017E550 */

loc_001845CF:
    edx = MEM32(edi + 0x13F4);
    esi = MEM32(edx + 0x1920);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    SET_LO8(eax, MEM8(edi + 0x210));
    xmm2.f[0] = MEMF(0x3A35E4); /* movss */
    /* test esi, esi - flags set for next jcc */
    MEM8(esp + 0xF) = (TEST_Z(esi, esi)) ? 1 : 0; /* sete */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM8(esp + 0x18) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018462F; /* je: equal / zero */

loc_00184600:
    xmm0.f[0] = MEMF(ebx + 0x20); /* movss */
    xmm1.f[0] = MEMF(0x3A35E0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_0018462F; /* jae: above or equal (unsigned >=) */

loc_00184612:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00184621; /* jb: below (unsigned <) */

loc_00184617:
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    goto loc_00184632;

loc_00184621:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1710); /* mulss */
    goto loc_00184632;

loc_0018462F:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_00184632:
    ecx = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(ecx));
    /* cmp LO8(eax), 3 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO8(eax), 3)) goto loc_00184645; /* jne: not equal / not zero */

loc_00184641:
    esi = 0; /* xor self */
    goto loc_00184677;

loc_00184645:
    xmm0.f[0] = MEMF(ebx + 0x20); /* movss */
    xmm1.f[0] = MEMF(0x3A35B8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0018465B; /* jb: below (unsigned <) */

loc_00184657:
    esi = 0; /* xor self */
    goto loc_00184677;

loc_0018465B:
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_00184667; /* jb: below (unsigned <) */

loc_00184660:
    esi = 0x18;
    goto loc_00184677;

loc_00184667:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1714); /* mulss */
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_00184677:
    if (CMP_NE(LO8(eax), 3)) goto loc_0018468E; /* jne: not equal / not zero */

loc_0018467B:
    eax = MEM32(ecx + 0xC);
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xA4); /* subss */
    goto loc_001846AD;

loc_0018468E:
    ecx = MEM32(edi + 0xCC4);
    xmm0.f[0] = MEMF(ecx + 0x49C); /* movss */
    edx = MEM32(edi + 0xCC0);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x34); /* subss */

loc_001846AD:
    /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ebx = MEM32(esp + 0x14);
    if (TEST_NZ(esi, esi)) goto loc_001846CE; /* jne: not equal / not zero */

loc_001846BB:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B168C) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(0x3B168C))) goto loc_00184756; /* jb: below (unsigned <) */

loc_001846CE:
    eax = MEM32(edi + 0xCC0);
    eax = eax + 0x5C;
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_001846E0:
    if (TEST_Z(esi, esi)) goto loc_00184715; /* je: equal / zero */

loc_001846E4:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x40A8C0);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_001834E0(); /* call 0x001834E0 */

loc_00184715:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00184756; /* jbe: below or equal (unsigned <=) */

loc_00184724:
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00184756:
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00184777; /* je: equal / zero */

loc_0018475E:
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = esp + 0x34;
    PUSH32(esp, 0); sub_0017E7F0(); /* call 0x0017E7F0 */

loc_0018476C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */

loc_00184777:
    eax = MEM32(esp + 0x18);
    esi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = 0x60DFC0;
    ecx = esp + 0x64;
    PUSH32(esp, 0); sub_00188600(); /* call 0x00188600 */

loc_0018479D:
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00184ABA; /* je: equal / zero */

loc_001847A9:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* subps: xmm2.f[0] -= MEMF(esp + 0x50) (packed 4xfloat) */
    esi = MEM32(edi + 0x13F4);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    if ((xmm0.f[0] > MEMF(esp + 0x18))) goto loc_00184ABA; /* ja: above (unsigned >) */

loc_001847F5:
    ecx = MEM32(edi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x20;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x50;
    MEMF(edx) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00184828:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69BC); /* mulss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0x18FA));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esi + 0x27D0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001849BF; /* je: equal / zero */

loc_001848BE:
    eax = MEM32(0x4A1CC0);
    eax = eax - 0;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C847C); /* mulss */
    if ((eax == 0)) goto loc_00184973; /* je: equal / zero */

loc_001848D4:
    eax--;
    if ((eax != 0)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001848DB:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001848E8:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001848F5:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184902:
    eax = SX8(LO8(ecx));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00184ABA; /* je: equal / zero */

loc_0018491A:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_00184ABA; /* jbe: below or equal (unsigned <=) */

loc_0018492F:
    xmm1.f[0] = MEMF(0x3C8480); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CC4); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00184ABA; /* jbe: below or equal (unsigned <=) */

loc_00184966:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00184973:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184980:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_0018498D:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_0018499A:
    eax = SX8(LO8(ecx));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00184ABA; /* je: equal / zero */

loc_001849B2:
    xmm0.f[0] = MEMF(0x3C8480); /* movss */
    goto loc_00184AA7;

loc_001849BF:
    eax = MEM32(0x4A1CB8);
    eax = eax - 0;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3C8474); /* mulss */
    if ((eax == 0)) goto loc_00184A70; /* je: equal / zero */

loc_001849D5:
    eax--;
    if ((eax != 0)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001849DC:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001849E9:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_001849F6:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184A03:
    eax = SX8(LO8(ecx));
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(edx, MEM8(ecx + 0x4AED49));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00184ABA; /* je: equal / zero */

loc_00184A1B:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED78) - sets EFLAGS */
    ecx = eax * 4 + 0x4AED78;
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED78))) goto loc_00184ABA; /* jbe: below or equal (unsigned <=) */

loc_00184A30:
    xmm1.f[0] = MEMF(0x3C8478); /* movss */
    MEMF(eax * 4 + 0x4AED70) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4A1CBC); /* movss */
    MEMF(eax * 4 + 0x4AED80) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x384028); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00184ABA; /* jbe: below or equal (unsigned <=) */

loc_00184A63:
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00184A70:
    SET_LO8(eax, MEM8(0x4AED88));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184A79:
    SET_LO8(eax, MEM8(0x752D33));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184A82:
    eax = MEM32(0x557A70);
    if (TEST_NZ(eax, eax)) goto loc_00184ABA; /* jne: not equal / not zero */

loc_00184A8B:
    eax = SX8(LO8(ecx));
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x4AED45);
    SET_LO8(ecx, MEM8(edx + 0x4AED49));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00184ABA; /* je: equal / zero */

loc_00184A9F:
    xmm0.f[0] = MEMF(0x3C8478); /* movss */

loc_00184AA7:
    /* comiss xmm0.f[0], MEMF(eax * 4 + 0x4AED68) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax * 4 + 0x4AED68))) goto loc_00184ABA; /* jbe: below or equal (unsigned <=) */

loc_00184AB1:
    MEMF(eax * 4 + 0x4AED68) = xmm0.f[0]; /* movss */

loc_00184ABA:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
