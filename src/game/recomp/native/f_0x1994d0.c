#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001994D0
 * Original: 0x001994D0 - 0x00199A7D (1453 bytes, 373 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001994D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001994D0:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x148);
    xmm0.f[0] = MEMF(eax + 0x10DC); /* movss */
    PUSH32(esp, esi);
    /* cmp MEM32(0x73A1C0), 1 - flags set for next jcc */
    MEM8(esp + 0x20) = (CMP_EQ(MEM32(0x73A1C0), 1)) ? 1 : 0; /* sete */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0019950C; /* je: equal / zero */

loc_001994FF:
    SET_LO8(edx, MEM8(ecx));
    MEM8(ebp + 9) = LO8(edx);
    edx = MEM32(ecx + 8);
    MEM32(ebp + 0xC) = edx;
    goto loc_00199517;

loc_0019950C:
    MEM8(ebp + 9) = 0;
    MEM32(ebp + 0xC) = 0;

loc_00199517:
    SET_LO8(edx, MEM8(esp + 0x2C));
    MEM8(ebp + 7) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM8(ebp + 8) = LO8(edx);
    edx = MEM32(esp + 0x28);
    esi = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    SET_LO8(eax, MEM8(esi + eax + 0x1689));
    MEM8(ebp + 6) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    MEMF(ebp + eax * 4 + 0xF8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(ebp + 8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(0x3F746C);
    MEM32(esp + 0x30) = 0x93;
    MEM32(esp + 0x10) = ebx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001995B9; /* je: equal / zero */

loc_00199563:
    ecx = MEM32(ebp + 0x128);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_00199571:
    edi = ZX8(MEM8(eax + 0x3A4B38));
    eax = MEM32(ebp + 0x128);
    esp = esp + 8;
    eax++;
    MEM32(ebp + 0x128) = eax;
    eax = MEM32(ebp + 0x148);
    ebx = MEM32(eax + 0x118C);
    ebx++;
    PUSH32(esp, 1);
    MEM32(eax + 0x118C) = ebx;
    eax = MEM32(0x3F7478);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    esi = ebp;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_001995B0:
    ebx = MEM32(esp + 0x10);
    goto loc_00199A3C;

loc_001995B9:
    /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x2C) = 0;
    if (TEST_Z(ecx, ecx)) goto loc_001997F9; /* je: equal / zero */

loc_001995C6:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_0019968E; /* je: equal / zero */

loc_001995CF:
    SET_LO8(eax, MEM8(esp + 0x24));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = 0x9D;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001997F9; /* je: equal / zero */

loc_001995E3:
    if (CMP_NE(MEM8(edx + 0x15CC), 1)) goto loc_001997F9; /* jne: not equal / not zero */

loc_001995F0:
    MEM32(esp + 0x24) = 0;
    edi = 0x3A4BC9;
    /* nop */

loc_00199600:
    eax = MEM32(0x73A190);
    if (CMP_NE(eax, MEM32(edi + -9))) goto loc_0019965E; /* jne: not equal / not zero */

loc_0019960A:
    ecx = MEM32(0x73A194);
    if (CMP_NE(ecx, MEM32(edi + -5))) goto loc_0019965E; /* jne: not equal / not zero */

loc_00199615:
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = MEM32(eax + 0x64B38C);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x216);
    if (TEST_S(esi, esi)) goto loc_0019965E; /* jl: less (signed <) */

loc_00199633:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x217);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1CC);
    ecx = ecx + 0x7397C8;
    PUSH32(esp, 0); sub_0019CEE0(); /* call 0x0019CEE0 */

loc_0019964B:
    ecx = ZX8(MEM8(edi));
    if (CMP_L(eax, ecx)) goto loc_0019965A; /* jl: less (signed <) */

loc_00199652:
    edx = ZX8(MEM8(edi + 1));
    if (CMP_LE(eax, edx)) goto loc_00199677; /* jle: less or equal (signed <=) */

loc_0019965A:
    edx = MEM32(esp + 0x28);

loc_0019965E:
    esi = MEM32(esp + 0x24);
    esi++;
    edi = edi + 0x10;
    /* cmp edi, 0x3A4FF9 - flags set for next jcc */
    MEM32(esp + 0x24) = esi;
    if (CMP_L(edi, 0x3A4FF9)) goto loc_00199600; /* jl: less (signed <) */

loc_00199672:
    goto loc_001997F9;

loc_00199677:
    eax = MEM32(esp + 0x24);
    eax = eax << 4;
    eax = ZX8(MEM8(eax + 0x3A4BC8));
    MEM32(esp + 0x30) = eax;
    goto loc_001997E8;

loc_0019968E:
    SET_LO8(eax, MEM8(ecx + 1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001997F9; /* je: equal / zero */

loc_00199699:
    ecx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x173);
    eax--;
    if (CMP_A(eax, 0xA)) goto loc_00199708; /* ja: above (unsigned >) */

loc_001996A9:
    { uint32_t _jt = MEM32(eax * 4 + 0x199A80); /* switch: 11 entries, 10 targets */
    if (_jt == 0x001996B0u) goto loc_001996B0;
    if (_jt == 0x001996BAu) goto loc_001996BA;
    if (_jt == 0x001996C4u) goto loc_001996C4;
    if (_jt == 0x001996CEu) goto loc_001996CE;
    if (_jt == 0x001996D8u) goto loc_001996D8;
    if (_jt == 0x001996E2u) goto loc_001996E2;
    if (_jt == 0x001996ECu) goto loc_001996EC;
    if (_jt == 0x001996F6u) goto loc_001996F6;
    if (_jt == 0x00199700u) goto loc_00199700;
    if (_jt == 0x00199708u) goto loc_00199708;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001996B0:
    MEM32(esp + 0x30) = 0x94;
    goto loc_00199708;

loc_001996BA:
    MEM32(esp + 0x30) = 0x95;
    goto loc_00199708;

loc_001996C4:
    MEM32(esp + 0x30) = 0x96;
    goto loc_00199708;

loc_001996CE:
    MEM32(esp + 0x30) = 0x97;
    goto loc_00199708;

loc_001996D8:
    MEM32(esp + 0x30) = 0x98;
    goto loc_00199708;

loc_001996E2:
    MEM32(esp + 0x30) = 0x99;
    goto loc_00199708;

loc_001996EC:
    MEM32(esp + 0x30) = 0x9A;
    goto loc_00199708;

loc_001996F6:
    MEM32(esp + 0x30) = 0x9B;
    goto loc_00199708;

loc_00199700:
    MEM32(esp + 0x30) = 0x9C;

loc_00199708:
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001997F9; /* je: equal / zero */

loc_00199714:
    ebx = ecx;
    if (CMP_NE(MEM8(ebx + 0x173), 4)) goto loc_00199745; /* jne: not equal / not zero */

loc_0019971F:
    ecx = MEM32(ebx + 0x16C);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 0x2424);
    if (TEST_Z(eax, eax)) goto loc_00199745; /* je: equal / zero */

loc_00199732:
    eax = ZX8(MEM8(eax + 0x2429));
    ebx = eax + eax * 2;
    ebx = ebx << 7;
    ebx = ebx + 0x625FB0;

loc_00199745:
    eax = ZX8(MEM8(ebx + 0x176));
    ecx = MEM32(eax * 8 + 0x647B70);
    edx = MEM32(eax * 8 + 0x647B74);
    eax = MEM32(0x73A194);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x73A190);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_00158640(); /* call 0x00158640 */

loc_00199774:
    esp = esp + 8;
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001997F5; /* je: equal / zero */

loc_00199780:
    edi = 0; /* xor self */
    esi = 0x3A4FF4;
    goto loc_00199790;

loc_00199789:
    eax = MEM32(esp + 0x28);
    /* nop */

loc_00199790:
    PUSH32(esp, 0); sub_001586A0(); /* call 0x001586A0 */

loc_00199795:
    if (CMP_NE(eax, MEM32(esi + -4))) goto loc_001997BC; /* jne: not equal / not zero */

loc_0019979A:
    edx = MEM32(esp + 0x18);
    if (CMP_NE(edx, MEM32(esi + 4))) goto loc_001997BC; /* jne: not equal / not zero */

loc_001997A3:
    eax = MEM32(esp + 0x1C);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_001997BC; /* jne: not equal / not zero */

loc_001997AC:
    eax = MEM32(esi);
    if (TEST_S(eax, eax)) goto loc_001997DA; /* jl: less (signed <) */

loc_001997B2:
    SET_LO8(ecx, MEM8(ebx + 0x171));
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_001997CA; /* je: equal / zero */

loc_001997BC:
    esi = esi + 0x18;
    edi++;
    if (CMP_L(esi, 0x3A50B4)) goto loc_00199789; /* jl: less (signed <) */

loc_001997C8:
    goto loc_001997F5;

loc_001997CA:
    edx = edi + edi * 2;
    eax = MEM32(edx * 8 + 0x3A5000);
    MEM32(esp + 0x30) = eax;
    goto loc_001997E8;

loc_001997DA:
    ecx = edi + edi * 2;
    edx = MEM32(ecx * 8 + 0x3A5000);
    MEM32(esp + 0x30) = edx;

loc_001997E8:
    MEM32(esp + 0x10) = 0x5DC;
    MEM8(esp + 0x2C) = 1;

loc_001997F5:
    ebx = MEM32(esp + 0x10);

loc_001997F9:
    SET_LO8(eax, MEM8(ebp + 7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019981B; /* je: equal / zero */

loc_00199800:
    SET_LO8(eax, MEM8(esp + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019981B; /* jne: not equal / not zero */

loc_00199808:
    eax = MEM32(0x3F7474);
    MEM32(esp + 0x30) = 0xA9;
    MEM32(esp + 0x10) = eax;
    ebx = eax;

loc_0019981B:
    edi = MEM32(esp + 0x30);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x11));
    esi = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_0019982F:
    SET_LO8(eax, MEM8(esp + 0x2C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + 0x12C) = 0xFFFFFFFFu;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019987E; /* je: equal / zero */

loc_00199841:
    if (CMP_L(edi, 0xAF)) goto loc_00199870; /* jl: less (signed <) */

loc_00199849:
    if (CMP_G(edi, 0xC2)) goto loc_00199870; /* jg: greater (signed >) */

loc_00199851:
    eax = MEM32(ebp + 0x148);
    ecx = edi + -175;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(ebp + 0x12C) = ecx;
    MEM32(eax + 0x1178) = MEM32(eax + 0x1178) | edx;

loc_00199870:
    eax = MEM32(ebp + 0x148);
    MEM32(eax + 0x1190) = MEM32(eax + 0x1190) + 1;
    goto loc_0019988A;

loc_0019987E:
    eax = MEM32(ebp + 0x148);
    MEM32(eax + 0x1194) = MEM32(eax + 0x1194) + 1;

loc_0019988A:
    xmm1.f[0] = MEMF(ebp + 0x110); /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001998AA; /* ja: above (unsigned >) */

loc_0019989D:
    /* ucomiss xmm1.f[0], MEMF(0x3B16C0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199905; /* jp: parity */

loc_001998AA:
    edx = MEM32(ebp + 0x114);
    edx++;
    MEM32(ebp + 0x114) = edx;
    xmm1.f[0] = MEMF(0x3F7410); /* movss */
    eax = edx;
    /* cmp eax, 1 - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + 0x110) = xmm1.f[0]; /* movss */
    if (CMP_LE(eax, 1)) goto loc_00199905; /* jle: less or equal (signed <=) */

loc_001998D2:
    eax = eax + 0xFFFFFFFEu;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_001998DD:
    edi = MEM32(eax * 4 + 0x3F7508);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0x11));
    esp = esp + 8;
    ebx = ebx + edi;
    edi = eax + 0xA3;
    esi = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_001998FF:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */

loc_00199905:
    xmm1.f[0] = MEMF(ebp + 0x118); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0019991F; /* ja: above (unsigned >) */

loc_00199912:
    /* ucomiss xmm1.f[0], MEMF(0x3B16C0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00199973; /* jp: parity */

loc_0019991F:
    edx = MEM32(ebp + 0x11C);
    edx++;
    MEM32(ebp + 0x11C) = edx;
    xmm1.f[0] = MEMF(0x3F7414); /* movss */
    eax = edx;
    /* cmp eax, 1 - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ebp + 0x118) = xmm1.f[0]; /* movss */
    if (CMP_LE(eax, 1)) goto loc_00199973; /* jle: less or equal (signed <=) */

loc_00199947:
    eax--;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_00199950:
    edi = MEM32(eax * 4 + 0x3F7514);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebp + 0x11));
    esp = esp + 8;
    eax--;
    ebx = ebx + edi;
    edi = eax + 0x9F;
    esi = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00199350(); /* call 0x00199350 */

loc_00199973:
    SET_LO8(eax, MEM8(ebp + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00199A3C; /* je: equal / zero */

loc_0019997E:
    SET_LO8(eax, MEM8(ebp + 0x11));
    ebx = ebx + MEM32(0x3F7470);
    MEM8(esp + 0x2C) = LO8(eax);
    eax = 0x4A71A0;
    esi = ebx;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00199997:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00199A3C; /* jne: not equal / not zero */

loc_0019999F:
    eax = MEM32(ebp + 0x130);
    edi = 0xA7;
    if (CMP_LE(eax, edi)) goto loc_001999D8; /* jle: less or equal (signed <=) */

loc_001999AE:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_001999BF:
    if (TEST_Z(LO8(eax), 3)) goto loc_00199A3C; /* je: equal / zero */

loc_001999C3:
    eax = MEM32(ebp + 0x134);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_001999D0:
    MEM32(ebp + 0x134) = eax;
    goto loc_00199A39;

loc_001999D8:
    SET_LO8(eax, MEM8(esp + 0x2C));
    ecx = MEM32(ebp + 0x148);
    MEM8(ebp + 0x11) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 0x18FA));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001999F3; /* je: equal / zero */

loc_001999EF:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00199A3C; /* je: equal / zero */

loc_001999F3:
    edx = MEM32(0x4D5370);
    ecx = MEM32(edx + 0x1B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x40), _icall_esp); /* indirect call */
    }

loc_00199A04:
    if (TEST_NZ(LO8(eax), 3)) goto loc_00199A0A; /* jne: not equal / not zero */

loc_00199A08:
    esi = 0; /* xor self */

loc_00199A0A:
    ecx = MEM32(ebp + 0x134);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x130) = edi;
    PUSH32(esp, 0); sub_00011510(); /* call 0x00011510 */

loc_00199A1D:
    edx = MEM32(ebp + 0x148);
    MEM32(ebp + 0x134) = eax;
    eax = MEM32(edx + 0x10DC);
    MEM32(ebp + 0x138) = eax;
    MEM8(ebp + 0x10) = 1;

loc_00199A39:
    esp = esp + 8;

loc_00199A3C:
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    ebp = MEM32(ebp + 0x148);
    edx = MEM32(ecx);
    ebp = ebp + 0x10D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x40), _icall_esp); /* indirect call */
    }

loc_00199A59:
    if (TEST_Z(LO8(eax), 3)) goto loc_00199A73; /* je: equal / zero */

loc_00199A5D:
    edx = MEM32(ebp + 0x4C);
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = edx + eax;
    MEM32(ebp + 0x4C) = edx;
    MEM32(ebp + 0xAC) = MEM32(ebp + 0xAC) + eax;

loc_00199A73:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 20; return; /* ret 16 */

}
