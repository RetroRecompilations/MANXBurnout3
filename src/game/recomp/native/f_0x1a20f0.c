#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A20F0
 * Original: 0x001A20F0 - 0x001A2765 (1653 bytes, 465 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A20F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001A20F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x728;
    SET_LO8(eax, MEM8(ebx + 0x363BB));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A275F; /* je: equal / zero */

loc_001A210E:
    eax = MEM32(ebx + 0x36370);
    if (CMP_EQ(eax, edi)) goto loc_001A21F3; /* je: equal / zero */

loc_001A211C:
    edx = ZX8(MEM8(ebx + 0x36398));
    goto loc_001A2130;

    /* nop */
    /* nop */

loc_001A2130:
    SET_LO8(ecx, 0); /* xor self */
    MEM8(ebx + edx + 0x36378) = MEM8(ebx + edx + 0x36378) - 1;
    if ((MEM8(ebx + edx + 0x36378) != 0)) goto loc_001A21BF; /* jne: not equal / not zero */

loc_001A213F:
    ecx = MEM32(ebx + 0x36370);
    ecx = MEM32(ecx + 0x108);
    if (CMP_EQ(ecx, edi)) goto loc_001A2157; /* je: equal / zero */

loc_001A214F:
    MEM32(ebx + 0x36370) = ecx;
    goto loc_001A2163;

loc_001A2157:
    MEM32(ebx + 0x36370) = edi;
    MEM32(ebx + 0x36374) = edi;

loc_001A2163:
    MEM32(eax + 0x108) = edi;
    SET_LO8(ecx, MEM8(ebx + 0x36398));
    SET_LO8(ecx, LO8(ecx) + 1);
    /* cmp LO8(ecx), 0x20 - flags set for next jcc */
    MEM8(ebx + 0x36398) = LO8(ecx);
    if (CMP_B(LO8(ecx), 0x20)) goto loc_001A2183; /* jb: below (unsigned <) */

loc_001A217C:
    MEM8(ebx + 0x36398) = 0;

loc_001A2183:
    if (CMP_NE(MEM32(ebx + 0x36364), edi)) goto loc_001A219F; /* jne: not equal / not zero */

loc_001A218B:
    MEM32(ebx + 0x36364) = eax;
    MEM32(ebx + 0x36368) = eax;
    MEM32(eax + 0x108) = edi;
    goto loc_001A21B7;

loc_001A219F:
    ecx = MEM32(ebx + 0x36368);
    MEM32(ecx + 0x108) = eax;
    MEM32(eax + 0x108) = edi;
    MEM32(ebx + 0x36368) = eax;

loc_001A21B7:
    MEM8(ebx + 0x363AC) = MEM8(ebx + 0x363AC) - 1;
    SET_LO8(ecx, 1);

loc_001A21BF:
    esi = MEM32(ebx + 0x36370);
    if (CMP_EQ(esi, edi)) goto loc_001A21F3; /* je: equal / zero */

loc_001A21C9:
    if (CMP_EQ(eax, MEM32(ebx + 0x36374))) goto loc_001A21F3; /* je: equal / zero */

loc_001A21D1:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A21DC; /* je: equal / zero */

loc_001A21D5:
    eax = esi;
    goto loc_001A211C;

loc_001A21DC:
    eax = MEM32(eax + 0x108);
    edx++;
    if (CMP_L(edx, 0x20)) goto loc_001A2130; /* jl: less (signed <) */

loc_001A21EC:
    edx = 0; /* xor self */
    goto loc_001A2130;

loc_001A21F3:
    SET_LO8(eax, MEM8(ebx + 0x363B9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A2277; /* je: equal / zero */

loc_001A21FD:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = esp + 0x28;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = 2;
    MEM32(esp + 0x1C) = edx;
    edi = esp + 0x30;
    esi = 0x73A1D0;
    /* nop */

loc_001A2220:
    eax = MEM32(esi);
    ecx = esi;
    MEM32(edi) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x18), _icall_esp); /* indirect call */
    }

loc_001A2229:
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(esi + 0x1358); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x24) - sets EFLAGS */
    MEM16(ecx) = LO16(eax);
    if ((xmm0.f[0] <= MEMF(esp + 0x24))) goto loc_001A2255; /* jbe: below or equal (unsigned <=) */

loc_001A223F:
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(esi + 0x10E4));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esp + 0x23) = LO8(eax);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_001A2255:
    ecx = MEM32(esp + 0x1C);
    esi = esi + 0x27E0;
    ecx = ecx + 2;
    edi = edi + 4;
    /* cmp esi, 0x73F190 - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(esi, 0x73F190)) goto loc_001A2220; /* jl: less (signed <) */

loc_001A2271:
    SET_LO8(edx, MEM8(esp + 0x23));
    goto loc_001A229E;

loc_001A2277:
    edx = MEM32(0x73A1D0);
    ecx = 0x73A1D0;
    MEM32(esp + 0x2C) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_001A228D:
    SET_LO8(edx, MEM8(0x73B2B4));
    MEM32(esp + 0x14) = eax;
    SET_LO8(edx, LO8(edx) + 1);
    MEM16(esp + 0x28) = LO16(eax);

loc_001A229E:
    SET_LO8(eax, MEM8(ebx + 0x363BD));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A22C3; /* je: equal / zero */

loc_001A22B6:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001A3AE0(); /* call 0x001A3AE0 */

loc_001A22C1:
    goto loc_001A2321;

loc_001A22C3:
    SET_LO8(eax, MEM8(ebx + 0x363B7));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A22E5; /* je: equal / zero */

loc_001A22CD:
    xmm1.f[0] = MEMF(ebx + 0x363A0); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B16E0))) goto loc_001A2321; /* jbe: below or equal (unsigned <=) */

loc_001A22DE:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001A2321; /* jbe: below or equal (unsigned <=) */

loc_001A22E3:
    goto loc_001A231A;

loc_001A22E5:
    SET_LO16(eax, MEM16(ebx + 0x363A4));
    SET_LO8(ecx, MEM8(ebx + 0x363A6));
    esi = ZX16(LO16(eax));
    edi = ZX8(LO8(ecx));
    edi = edi + esi;
    if (CMP_LE(edi & edi, 0)) goto loc_001A2321; /* jle: less or equal (signed <=) */

loc_001A22FE:
    edi = MEM32(esp + 0x14);
    if (CMP_B(LO16(edi), LO16(eax))) goto loc_001A2321; /* jb: below (unsigned <) */

loc_001A2307:
    eax = MEM32(ebx + 0x36340);
    eax = eax + esi;
    esi = ZX16(LO16(edi));
    if (CMP_G(esi, eax)) goto loc_001A2321; /* jg: greater (signed >) */

loc_001A2316:
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_001A2321; /* jne: not equal / not zero */

loc_001A231A:
    MEM8(ebx + 0x363BD) = 1;

loc_001A2321:
    eax = MEM32(0x73A19C);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_001A2451; /* jle: less or equal (signed <=) */

loc_001A233A:
    MEM32(esp + 0x18) = 0x64B38C;
    esi = esp + 0x4B0;
    /* nop */

loc_001A2350:
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx * 4 + 0x73A1A8);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x1920);
    /* test eax, eax - flags set for next jcc */
    edi = MEM32(edx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    if (TEST_NZ(eax, eax)) goto loc_001A23DD; /* jne: not equal / not zero */

loc_001A2372:
    SET_LO8(eax, MEM8(ecx + 0x18FD));
    MEM8(esi + 0x49) = LO8(eax);
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0xE80);
    eax = MEM32(eax + 0xE88);
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x44) = eax;
    SET_LO8(eax, MEM8(0x752D80));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x48) = 1;
    MEM32(esi + 0x40) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A23D7; /* je: equal / zero */

loc_001A23A1:
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    eax = 0x4CFD90;
    PUSH32(esp, 0); sub_00013E50(); /* call 0x00013E50 */

loc_001A23B0:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4CFDA0), 16); /* movaps */
    goto loc_001A242A;

loc_001A23D7:
    eax = esp + 0x30;
    goto loc_001A2402;

loc_001A23DD:
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0xE80);
    eax = MEM32(eax + 0xE88);
    MEM8(esi + 0x48) = 0;
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = edx;
    MEM8(esi + 0x49) = 0;
    eax = esp + 0x40;

loc_001A2402:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    edx = MEM32(ecx);
    memcpy((void *)XBOX_PTR(esi + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x14), _icall_esp); /* indirect call */
    }

loc_001A2427:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */

loc_001A242A:
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    eax++;
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    edi = edi + 0x30;
    esi = esi + 0x70;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(eax, ecx)) goto loc_001A2350; /* jl: less (signed <) */

loc_001A2451:
    ecx = MEM32(esp + 0x24);
    edx = 0; /* xor self */
    if (CMP_LE(ecx, edx)) goto loc_001A2470; /* jle: less or equal (signed <=) */

loc_001A245B:
    eax = ebx + 0x36356;

loc_001A2461:
    MEM8(eax + -6) = 0;
    MEM8(eax) = 0;
    MEM8(eax + 6) = 0;
    eax++;
    ecx--;
    if ((ecx != 0)) goto loc_001A2461; /* jne: not equal / not zero */

loc_001A2470:
    esi = ebx + 0x2A4D0;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    edi = edi;

loc_001A2480:
    /* cmp edx, 0xDE - flags set for next jcc */
    edi = ZX16(MEM16(esp + 0x18));
    edi = MEM32(ebx + edi * 4 + 0x36300);
    eax = 1;
    SET_LO8(ecx, 0x20);
    MEM32(esp + 0x30) = edi;
    if (CMP_L(edx, 0xDE)) goto loc_001A24A1; /* jl: less (signed <) */

loc_001A249F:
    SET_LO8(ecx, 0x1F);

loc_001A24A1:
    edi = MEM32(esp + 0x14);
    ecx = ZX8(LO8(ecx));

loc_001A24A8:
    if (TEST_Z(MEM32(esp + 0x30), eax)) goto loc_001A24B6; /* je: equal / zero */

loc_001A24AE:
    MEM32(esp + edi * 4 + 0x98) = esi;
    edi++;

loc_001A24B6:
    eax = eax << 1;
    esi = esi + 0x50;
    ecx--;
    if ((ecx != 0)) goto loc_001A24A8; /* jne: not equal / not zero */

loc_001A24BE:
    ecx = MEM32(esp + 0x18);
    edx = edx + 0x20;
    ecx++;
    /* cmp edx, 0xFE - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(edx, 0xFE)) goto loc_001A2480; /* jl: less (signed <) */

loc_001A24D6:
    ecx = MEM32(0x731F9C);
    esi = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_LE(edi & edi, 0)) goto loc_001A251C; /* jle: less or equal (signed <=) */

loc_001A24E6:
    goto loc_001A24F0;

    /* nop */
    /* nop */

loc_001A24F0:
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esp + esi * 4 + 0x98);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x363B8));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x363B7));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019F560(); /* call 0x0019F560 */

loc_001A2513:
    eax = MEM32(esp + 0x14);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001A24F0; /* jl: less (signed <) */

loc_001A251C:
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_001A254A; /* jle: less or equal (signed <=) */

loc_001A2526:
    goto loc_001A2530;

    /* nop */
    /* nop */

loc_001A2530:
    eax = MEM32(esp + esi * 4 + 0x98);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0x363B8));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019F1C0(); /* call 0x0019F1C0 */

loc_001A2545:
    esi++;
    if (CMP_L(esi, edi)) goto loc_001A2530; /* jl: less (signed <) */

loc_001A254A:
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_001A2567; /* jle: less or equal (signed <=) */

loc_001A2550:
    ecx = MEM32(esp + esi * 4 + 0x98);
    if (TEST_Z(MEM8(ecx + 0x4B), 1)) goto loc_001A2562; /* je: equal / zero */

loc_001A255D:
    PUSH32(esp, 0); sub_0019F3B0(); /* call 0x0019F3B0 */

loc_001A2562:
    esi++;
    if (CMP_L(esi, edi)) goto loc_001A2550; /* jl: less (signed <) */

loc_001A2567:
    eax = MEM32(ebx + 0x362E0);
    edi = 0; /* xor self */
    MEM32(esp + 0x30) = eax;
    SET_LO8(eax, MEM8(ebx + 0x363AB));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ebx + 0x127D0;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A25EC; /* jbe: below or equal (unsigned <=) */

loc_001A258B:
    goto loc_001A2590;

    /* nop */

loc_001A2590:
    /* cmp edi, 0xDE - flags set for next jcc */
    eax = 1;
    SET_LO8(ecx, 0x20);
    if (CMP_L(edi, 0xDE)) goto loc_001A25A1; /* jl: less (signed <) */

loc_001A259F:
    SET_LO8(ecx, 0x1F);

loc_001A25A1:
    ecx = ZX8(LO8(ecx));

loc_001A25A4:
    edx = MEM32(esp + 0x30);
    if (TEST_Z(edx, eax)) goto loc_001A25BC; /* je: equal / zero */

loc_001A25AC:
    edx = MEM32(esp + 0x14);
    MEM32(esp + edx * 4 + 0x98) = esi;
    edx++;
    MEM32(esp + 0x14) = edx;

loc_001A25BC:
    eax = eax << 1;
    esi = esi + 0x180;
    ecx--;
    if ((ecx != 0)) goto loc_001A25A4; /* jne: not equal / not zero */

loc_001A25C7:
    eax = MEM32(esp + 0x18);
    eax++;
    MEM32(esp + 0x18) = eax;
    eax = ZX16(LO16(eax));
    ecx = MEM32(ebx + eax * 4 + 0x362E0);
    eax = ZX8(MEM8(ebx + 0x363AB));
    edi = edi + 0x20;
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_L(edi, eax)) goto loc_001A2590; /* jl: less (signed <) */

loc_001A25EC:
    eax = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A261E; /* jle: less or equal (signed <=) */

loc_001A25F6:
    esi = MEM32(esp + 0x24);
    /* nop */

loc_001A2600:
    eax = MEM32(esp + edi * 4 + 0x98);
    PUSH32(esp, esi);
    edx = esp + 0x494;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001A6B40(); /* call 0x001A6B40 */

loc_001A2615:
    eax = MEM32(esp + 0x14);
    edi++;
    if (CMP_L(edi, eax)) goto loc_001A2600; /* jl: less (signed <) */

loc_001A261E:
    eax = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A264F; /* jle: less or equal (signed <=) */

loc_001A2628:
    goto loc_001A2630;

    /* nop */

loc_001A2630:
    edi = MEM32(esp + esi * 4 + 0x98);
    eax = MEM32(edi + 0x10C);
    if (TEST_Z(eax, eax)) goto loc_001A2646; /* je: equal / zero */

loc_001A2641:
    PUSH32(esp, 0); sub_001A8640(); /* call 0x001A8640 */

loc_001A2646:
    eax = MEM32(esp + 0x14);
    esi++;
    if (CMP_L(esi, eax)) goto loc_001A2630; /* jl: less (signed <) */

loc_001A264F:
    SET_LO8(eax, MEM8(ebx + 0x363B0));
    esi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A2683; /* jbe: below or equal (unsigned <=) */

loc_001A265B:
    edi = ebx + 0x116EC;

loc_001A2661:
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0x363BA));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0019B890(); /* call 0x0019B890 */

loc_001A2674:
    edx = ZX8(MEM8(ebx + 0x363B0));
    esi++;
    edi = edi + 0x20;
    if (CMP_L(esi, edx)) goto loc_001A2661; /* jl: less (signed <) */

loc_001A2683:
    SET_LO8(eax, MEM8(ebx + 0x363AF));
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A26AE; /* jbe: below or equal (unsigned <=) */

loc_001A268F:
    esi = ebx + 0x117CC;

loc_001A2695:
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019E6D0(); /* call 0x0019E6D0 */

loc_001A269F:
    ecx = ZX8(MEM8(ebx + 0x363AF));
    edi++;
    esi = esi + 0x18;
    if (CMP_L(edi, ecx)) goto loc_001A2695; /* jl: less (signed <) */

loc_001A26AE:
    SET_LO8(eax, MEM8(ebx + 0x363BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A275F; /* jne: not equal / not zero */

loc_001A26BC:
    SET_LO8(eax, MEM8(ebx + 0x363B8));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A26FC; /* jne: not equal / not zero */

loc_001A26C6:
    SET_LO8(eax, MEM8(ebx + 0x363B7));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A26FC; /* jne: not equal / not zero */

loc_001A26D0:
    edi = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_001A275F; /* jle: less or equal (signed <=) */

loc_001A26DE:
    edi = edi;

loc_001A26E0:
    edx = MEM32(esp + 0x1C);
    ecx = ZX16(MEM16(esp + esi * 2 + 0x28));
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001A3110(); /* call 0x001A3110 */

loc_001A26F1:
    esi++;
    if (CMP_L(esi, edi)) goto loc_001A26E0; /* jl: less (signed <) */

loc_001A26F6:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A26FC:
    SET_LO8(eax, MEM8(ebx + 0x363AD));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x28) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A275F; /* jbe: below or equal (unsigned <=) */

loc_001A270E:
    esi = ebx + 4;

loc_001A2711:
    eax = MEM32(esp + 0x2C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A2745; /* jle: less or equal (signed <=) */

loc_001A271B:
    goto loc_001A2720;

    /* nop */

loc_001A2720:
    ecx = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x363B7));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebx + 0x363B8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001A5880(); /* call 0x001A5880 */

loc_001A273C:
    eax = MEM32(esp + 0x2C);
    edi++;
    if (CMP_L(edi, eax)) goto loc_001A2720; /* jl: less (signed <) */

loc_001A2745:
    eax = MEM32(esp + 0x28);
    edx = ZX8(MEM8(ebx + 0x363AD));
    eax++;
    esi = esi + 0x118;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(eax, edx)) goto loc_001A2711; /* jl: less (signed <) */

loc_001A275F:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
