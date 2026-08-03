#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00198390
 * Original: 0x00198390 - 0x00198696 (774 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198390(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198390:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0xC8);
    ecx = MEM32(eax + 0x1920);
    ebp = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    ebx = 2;
    if (CMP_EQ(ecx, ebx)) goto loc_00198418; /* je: equal / zero */

loc_001983B2:
    SET_LO8(eax, MEM8(0x73A15B));
    PUSH32(esp, ebp);
    esi = 0x739C60;
    MEM8(edi + 0x95) = LO8(eax);
    PUSH32(esp, 0); sub_0017DB20(); /* call 0x0017DB20 */

loc_001983C8:
    MEM32(edi + 0x84) = eax;
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_0017DBE0(); /* call 0x0017DBE0 */

loc_001983D7:
    MEM32(edi + 0x90) = eax;
    SET_LO8(ecx, MEM8(ebp + ebp * 2 + 0x73A109));
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001983EC; /* je: equal / zero */

loc_001983EA:
    SET_LO8(eax, 1);

loc_001983EC:
    SET_LO8(ecx, MEM8(ebp + ebp * 2 + 0x73A10A));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001983F9; /* je: equal / zero */

loc_001983F7:
    SET_LO8(eax, LO8(eax) | 2);

loc_001983F9:
    SET_LO8(ecx, MEM8(ebp + ebp * 2 + 0x73A10B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00198406; /* je: equal / zero */

loc_00198404:
    SET_LO8(eax, LO8(eax) | 4);

loc_00198406:
    SET_LO8(ecx, MEM8(0x73A15B));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00198412; /* je: equal / zero */

loc_00198410:
    SET_LO8(eax, LO8(eax) | 8);

loc_00198412:
    MEM8(edi + 0x94) = LO8(eax);

loc_00198418:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_0019855B; /* je: equal / zero */

loc_00198425:
    ecx = MEM32(eax + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_0019855B; /* je: equal / zero */

loc_00198433:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x9C), _icall_esp); /* indirect call */
    }

loc_0019843B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019855B; /* je: equal / zero */

loc_00198443:
    eax = 0; /* xor self */
    /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ebp, ebp)) ? 1 : 0); /* sete */
    esi = MEM32(eax * 4 + 0x73A1A8);
    ecx = MEM32(esi + 0x16D8);
    esi = esi + 0x16D0;
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_0019854A; /* je: equal / zero */

loc_00198467:
    SET_LO8(ebx, MEM8(edi + 0x94));
    SET_LO8(ecx, MEM8(esi + 0x94));
    SET_LO8(eax, LO8(ebx));
    edx = 0x739C60;
    PUSH32(esp, 0); sub_0017DC40(); /* call 0x0017DC40 */

loc_0019847F:
    ebp = 4;
    eax = eax - ebp;
    if ((eax == 0)) goto loc_001984AE; /* je: equal / zero */

loc_00198488:
    eax--;
    if ((eax == 0)) goto loc_001984A2; /* je: equal / zero */

loc_0019848B:
    eax--;
    if ((eax == 0)) goto loc_0019849A; /* je: equal / zero */

loc_0019848E:
    MEM32(edi + 0x8C) = 1;
    goto loc_001984B8;

loc_0019849A:
    MEM32(edi + 0x8C) = ebp;
    goto loc_001984B8;

loc_001984A2:
    MEM32(edi + 0x8C) = 2;
    goto loc_001984B8;

loc_001984AE:
    MEM32(edi + 0x8C) = 0xFFFFFFFEu;

loc_001984B8:
    ecx = MEM32(edi + 0x8C);
    eax = MEM32(edi + 0x90);
    edx = MEM32(edi + 0x84);
    PUSH32(esp, 0); sub_0017DCA0(); /* call 0x0017DCA0 */

loc_001984CF:
    MEM32(edi + 0x98) = eax;
    SET_LO8(eax, MEM8(esi + 0x94));
    SET_LO8(ecx, LO8(ebx));
    edx = 0x739C60;
    PUSH32(esp, 0); sub_0017DC40(); /* call 0x0017DC40 */

loc_001984E7:
    eax = eax - ebp;
    if ((eax == 0)) goto loc_00198511; /* je: equal / zero */

loc_001984EB:
    eax--;
    if ((eax == 0)) goto loc_00198505; /* je: equal / zero */

loc_001984EE:
    eax--;
    if ((eax == 0)) goto loc_001984FD; /* je: equal / zero */

loc_001984F1:
    MEM32(esi + 0x8C) = 1;
    goto loc_0019851B;

loc_001984FD:
    MEM32(esi + 0x8C) = ebp;
    goto loc_0019851B;

loc_00198505:
    MEM32(esi + 0x8C) = 2;
    goto loc_0019851B;

loc_00198511:
    MEM32(esi + 0x8C) = 0xFFFFFFFEu;

loc_0019851B:
    ecx = MEM32(esi + 0x8C);
    eax = MEM32(esi + 0x90);
    edx = MEM32(esi + 0x84);
    PUSH32(esp, 0); sub_0017DCA0(); /* call 0x0017DCA0 */

loc_00198532:
    MEM32(esi + 0x98) = eax;
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198671; /* jne: not equal / not zero */

loc_00198545:
    goto loc_00198663;

loc_0019854A:
    MEM32(edi + 0x8C) = eax;
    MEM32(edi + 0x98) = eax;
    goto loc_00198671;

loc_0019855B:
    SET_LO8(eax, MEM8(edi + 0x94));
    if (TEST_Z(LO8(eax), 1)) goto loc_0019856C; /* je: equal / zero */

loc_00198565:
    eax = 4;
    goto loc_00198596;

loc_0019856C:
    SET_LO8(ecx, MEM8(0x73A15A));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0019857D; /* je: equal / zero */

loc_00198576:
    eax = 9;
    goto loc_00198596;

loc_0019857D:
    if (TEST_Z(LO8(eax), 4)) goto loc_00198588; /* je: equal / zero */

loc_00198581:
    eax = 6;
    goto loc_00198596;

loc_00198588:
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) - 2);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 4;
    eax = eax + 5;

loc_00198596:
    eax = eax - 4;
    if ((eax == 0)) goto loc_001985C1; /* je: equal / zero */

loc_0019859B:
    eax--;
    if ((eax == 0)) goto loc_001985B9; /* je: equal / zero */

loc_0019859E:
    eax--;
    if ((eax == 0)) goto loc_001985AD; /* je: equal / zero */

loc_001985A1:
    MEM32(edi + 0x8C) = 1;
    goto loc_001985CB;

loc_001985AD:
    MEM32(edi + 0x8C) = 4;
    goto loc_001985CB;

loc_001985B9:
    MEM32(edi + 0x8C) = ebx;
    goto loc_001985CB;

loc_001985C1:
    MEM32(edi + 0x8C) = 0xFFFFFFFEu;

loc_001985CB:
    eax = MEM32(edi + 0x90);
    esi = MEM32(edi + 0x84);
    ecx = MEM32(edi + 0x8C);
    eax = eax + esi;
    if (CMP_EQ(ecx, 0xFFFFFFFEu)) goto loc_00198609; /* je: equal / zero */

loc_001985E4:
    if (CMP_EQ(ecx, ebx)) goto loc_001985FB; /* je: equal / zero */

loc_001985E8:
    if (CMP_NE(ecx, 4)) goto loc_00198619; /* jne: not equal / not zero */

loc_001985ED:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1690); /* mulss */
    goto loc_00198615;

loc_001985FB:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    goto loc_00198615;

loc_00198609:
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */

loc_00198615:
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */

loc_00198619:
    ecx = MEM32(0x739C6C);
    /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    if (CMP_NE(ecx, 0xFFFFFFFFu)) eax = ecx; /* cmovne */
    MEM32(edi + 0x98) = eax;
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198671; /* jne: not equal / not zero */

loc_00198634:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x9C), _icall_esp); /* indirect call */
    }

loc_00198648:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198663; /* jne: not equal / not zero */

loc_0019864C:
    eax = MEM32(0x4D5370);
    ecx = MEM32(eax + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xA0), _icall_esp); /* indirect call */
    }

loc_0019865F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00198671; /* je: equal / zero */

loc_00198663:
    eax = MEM32(edi + 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00198250(); /* call 0x00198250 */

loc_00198671:
    ecx = MEM32(edi + 0xC8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    ebx = 0x739C60;
    PUSH32(esp, 0); sub_0017DEB0(); /* call 0x0017DEB0 */

loc_00198688:
    edx = ZX8(LO8(eax));
    MEM32(edi + 0x88) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
