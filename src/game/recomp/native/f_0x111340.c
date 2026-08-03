#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111340
 * Original: 0x00111340 - 0x00111620 (736 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111340:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xE9C98);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xE9C9C);
    eax = esi;
    eax = eax & edi;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0011150A; /* jne: not equal / not zero */

loc_00111361:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    edi = MEM32(esp + 0x14);
    edx = 2;
    ecx = ebp + 0xD3B14;
    goto loc_00111380;

    /* nop */

loc_00111380:
    xmm1.f[0] = MEMF(ecx + -1248); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00111393; /* jbe: below or equal (unsigned <=) */

loc_0011138D:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + -2;

loc_00111393:
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001113A2; /* jbe: below or equal (unsigned <=) */

loc_0011139C:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + -1;

loc_001113A2:
    xmm1.f[0] = MEMF(ecx + 0x4E0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001113B4; /* jbe: below or equal (unsigned <=) */

loc_001113AF:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx;

loc_001113B4:
    xmm1.f[0] = MEMF(ecx + 0x9C0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001113C7; /* jbe: below or equal (unsigned <=) */

loc_001113C1:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + 1;

loc_001113C7:
    xmm1.f[0] = MEMF(ecx + 0xEA0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001113DA; /* jbe: below or equal (unsigned <=) */

loc_001113D4:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + 2;

loc_001113DA:
    xmm1.f[0] = MEMF(ecx + 0x1380); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001113ED; /* jbe: below or equal (unsigned <=) */

loc_001113E7:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + 3;

loc_001113ED:
    xmm1.f[0] = MEMF(ecx + 0x1860); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00111400; /* jbe: below or equal (unsigned <=) */

loc_001113FA:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + 4;

loc_00111400:
    xmm1.f[0] = MEMF(ecx + 0x1D40); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00111413; /* jbe: below or equal (unsigned <=) */

loc_0011140D:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    edi = edx + 5;

loc_00111413:
    edx = edx + 8;
    eax = edx + -2;
    ecx = ecx + 0x2700;
    if (CMP_L(eax, 0x40)) goto loc_00111380; /* jl: less (signed <) */

loc_00111428:
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4E0);
    eax = ecx + ebp;
    ecx = ZX8(MEM8(eax + 0xD363A));
    ecx = ecx - 0;
    esi = eax + 0xD3380;
    if ((ecx == 0)) goto loc_00111465; /* je: equal / zero */

loc_00111445:
    ecx--;
    if ((ecx != 0)) goto loc_00111480; /* jne: not equal / not zero */

loc_00111448:
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xD3638);
    eax = MEM32(esi + 0x2B0);
    ecx = MEM32(eax + 0xCC4);
    MEM8(edx + ecx + 0x4B2) = 4;
    goto loc_00111480;

loc_00111465:
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xD3638);
    eax = MEM32(esi + 0x2B0);
    ecx = MEM32(eax + 0xCC4);
    MEM8(edx + ecx + 0x4AC) = 4;

loc_00111480:
    edx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0); sub_001069C0(); /* call 0x001069C0 */

loc_00111494:
    SET_LO8(eax, MEM8(ebx + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001114AF; /* je: equal / zero */

loc_0011149E:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x218);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001114AF:
    eax = MEM32(ebp + 0x1CB70);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00111617; /* jle: less or equal (signed <=) */

loc_001114BF:
    eax = ebp + 0x70;

loc_001114C2:
    if (CMP_NE(MEM8(eax), 7)) goto loc_001114CF; /* jne: not equal / not zero */

loc_001114C7:
    edx = ZX8(MEM8(eax + 2));
    if (CMP_EQ(edx, edi)) goto loc_001114E6; /* je: equal / zero */

loc_001114CF:
    edx = MEM32(ebp + 0x1CB70);
    ecx++;
    eax = eax + 0x30;
    if (CMP_L(ecx, edx)) goto loc_001114C2; /* jl: less (signed <) */

loc_001114DD:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001114E6:
    ecx = MEM32(esi + 0x204);
    edx = esi + 0x1D0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM8(eax + 1) = 0;
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_00111501:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011150A:
    edx = 0; /* xor self */
    ecx = 1;
    ebx = 0; /* xor self */

loc_00111513:
    ebp = esi;
    eax = edi;
    ebp = ebp & ecx;
    eax = eax & edx;
    ebp = ebp | eax;
    if ((ebp == 0)) goto loc_00111570; /* je: equal / zero */

loc_0011151F:
    edx = (edx << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    ebp = esi;
    eax = edi;
    ebp = ebp & ecx;
    eax = eax & edx;
    ebp = ebp | eax;
    if ((ebp == 0)) goto loc_00111565; /* je: equal / zero */

loc_00111531:
    edx = (edx << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    ebp = esi;
    eax = edi;
    ebp = ebp & ecx;
    eax = eax & edx;
    ebp = ebp | eax;
    if ((ebp == 0)) goto loc_00111568; /* je: equal / zero */

loc_00111543:
    edx = (edx << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    ebp = esi;
    eax = edi;
    ebp = ebp & ecx;
    eax = eax & edx;
    ebp = ebp | eax;
    if ((ebp == 0)) goto loc_0011156D; /* je: equal / zero */

loc_00111555:
    edx = (edx << 1) | (ecx >> (32 - 1)); /* shld */
    ebx = ebx + 4;
    ecx = ecx << 1;
    if (CMP_L(ebx, 0x40)) goto loc_00111513; /* jl: less (signed <) */

loc_00111563:
    goto loc_00111570;

loc_00111565:
    ebx++;
    goto loc_00111570;

loc_00111568:
    ebx = ebx + 2;
    goto loc_00111570;

loc_0011156D:
    ebx = ebx + 3;

loc_00111570:
    if (CMP_NE(ebx, 0x40)) goto loc_0011157E; /* jne: not equal / not zero */

loc_00111575:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0011157E:
    ebp = MEM32(esp + 0x14);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4E0);
    esi = esi | ecx;
    ecx = MEM32(esp + 0x20);
    edi = edi | edx;
    MEM32(ebp + 0xE9C9C) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(ebp + 0xE9C98) = esi;
    esi = eax + ebp + 0xD3380;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0); sub_001069C0(); /* call 0x001069C0 */

loc_001115B5:
    SET_LO8(eax, MEM8(edi + 0x210));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001115D0; /* je: equal / zero */

loc_001115BF:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x218);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_001115D0:
    eax = MEM32(ebp + 0x1CB70);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    eax = ecx + ebp + 0x70;
    MEM8(eax) = 7;
    MEM32(eax + 0xC) = esi;
    edx = MEM32(esi + 0x204);
    ecx = esi + 0x1D0;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = 0;
    MEM8(eax + 2) = LO8(ebx);
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_00111604:
    ecx = MEM32(ebp + 0x1CB70);
    eax = ebp;
    PUSH32(esp, 0); sub_00111AC0(); /* call 0x00111AC0 */

loc_00111611:
    MEM32(ebp + 0x1CB70) = MEM32(ebp + 0x1CB70) + 1;

loc_00111617:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
