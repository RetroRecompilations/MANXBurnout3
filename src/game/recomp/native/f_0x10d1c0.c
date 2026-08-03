#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010D1C0
 * Original: 0x0010D1C0 - 0x0010D484 (708 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm5;

loc_0010D1C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    eax = MEM32(0x73A19C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x73A1C0);
    esi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0010D225; /* jle: less or equal (signed <=) */

loc_0010D1E0:
    xmm5.f[0] = MEMF(0x3A55F8); /* movss */
    edi = 0x73BB8C;
    ebx = 0x737710;

loc_0010D1F2:
    edx = ebx;
    PUSH32(esp, 0); sub_00164830(); /* call 0x00164830 */

loc_0010D1F9:
    if (TEST_Z(eax, eax)) goto loc_0010D20F; /* je: equal / zero */

loc_0010D1FD:
    ecx = (uint32_t)(int32_t)SMEM8(edi);
    edx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEMF(ecx + edx + 0x138) = xmm5.f[0]; /* movss */

loc_0010D20F:
    eax = MEM32(0x73A1C0);
    esi++;
    ebx = ebx + 0x1050;
    edi = edi + 0x27E0;
    if (CMP_L(esi, eax)) goto loc_0010D1F2; /* jl: less (signed <) */

loc_0010D225:
    eax = MEM32(0x4D5370);
    if (TEST_NZ(eax, eax)) goto loc_0010D234; /* jne: not equal / not zero */

loc_0010D22E:
    MEM8(esp + 0x1B) = LO8(eax);
    goto loc_0010D28B;

loc_0010D234:
    esi = MEM32(eax + 0x1B8);
    if (TEST_NZ(esi, esi)) goto loc_0010D245; /* jne: not equal / not zero */

loc_0010D23E:
    MEM8(esp + 0x1B) = 0;
    goto loc_0010D28B;

loc_0010D245:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x90), _icall_esp); /* indirect call */
    }

loc_0010D24F:
    if (CMP_EQ(eax, 6)) goto loc_0010D286; /* je: equal / zero */

loc_0010D254:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0010D25E:
    if (CMP_EQ(eax, 3)) goto loc_0010D286; /* je: equal / zero */

loc_0010D263:
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_0010D26D:
    if (CMP_EQ(eax, 4)) goto loc_0010D286; /* je: equal / zero */

loc_0010D272:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_0010D27C:
    /* cmp eax, 5 - flags set for next jcc */
    MEM8(esp + 0x1B) = 0;
    if (CMP_NE(eax, 5)) goto loc_0010D28B; /* jne: not equal / not zero */

loc_0010D286:
    MEM8(esp + 0x1B) = 1;

loc_0010D28B:
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0010D447; /* jle: less or equal (signed <=) */

loc_0010D29D:
    esi = MEM32(ebp + 8);
    MEM32(esp + 0x20) = 0x64B38C;
    esi = esi + 0x138;
    edi = edi;

loc_0010D2B0:
    xmm0.f[0] = MEMF(esi + -8); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0010D424; /* jbe: below or equal (unsigned <=) */

loc_0010D2C2:
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(ecx);
    edi = MEM32(ebx + 0xCC4);
    eax = MEM32(eax * 4 + 0x73A1A8);
    edi = edi + 0x300;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_0012F820(); /* call 0x0012F820 */

loc_0010D2E4:
    xmm0.f[0] = MEMF(esi + -8); /* movss */
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    xmm3.f[0] = MEMF(esi); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm3.f[0], xmm2.f[0] - sets EFLAGS */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    if ((xmm3.f[0] <= xmm2.f[0])) goto loc_0010D311; /* jbe: below or equal (unsigned <=) */

loc_0010D309:
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi) = xmm3.f[0]; /* movss */

loc_0010D311:
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D3DF; /* jne: not equal / not zero */

loc_0010D31D:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0010D3DF; /* jb: below (unsigned <) */

loc_0010D32E:
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0xD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D3E2; /* jne: not equal / not zero */

loc_0010D33C:
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    /* comiss xmm1.f[0], MEMF(esi + -4) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esi + -4))) goto loc_0010D3C4; /* jbe: below or equal (unsigned <=) */

loc_0010D34A:
    xmm1.f[0] = MEMF(esi); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm2.f[0])) goto loc_0010D3BA; /* ja: above (unsigned >) */

loc_0010D353:
    xmm1.f[0] = MEMF(ebx + 0xBC); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B1694) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(0x3B1694))) goto loc_0010D3BA; /* ja: above (unsigned >) */

loc_0010D364:
    edx = ebx + 0xD0;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x38) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0010D38E:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0010D3C4; /* jbe: below or equal (unsigned <=) */

loc_0010D39B:
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */

loc_0010D3A1:
    xmm2.f[0] = MEMF(esi + -4); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + -4) = xmm2.f[0]; /* movss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */
    goto loc_0010D3E2;

loc_0010D3BA:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_0010D3A1;

loc_0010D3C4:
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_0010D3E2; /* jne: not equal / not zero */

loc_0010D3D2:
    MEM8(edi + 0xD) = 1;
    MEM8(0x40FB4D) = 1;
    goto loc_0010D3E2;

loc_0010D3DF:
    edi = MEM32(ebp + 8);

loc_0010D3E2:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(esi + -8) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + -8))) goto loc_0010D415; /* jb: below (unsigned <) */

loc_0010D3EB:
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x218);
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64B310);
    MEMF(ecx + edi + 0x130) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00114D10(); /* call 0x00114D10 */

loc_0010D413:
    goto loc_0010D424;

loc_0010D415:
    edx = MEM32(ebp + 0xC);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0010CD10(); /* call 0x0010CD10 */

loc_0010D424:
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    eax++;
    edi = edi + 0x30;
    esi = esi + 0x3C;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edi;
    if (CMP_L(eax, ecx)) goto loc_0010D2B0; /* jl: less (signed <) */

loc_0010D447:
    eax = MEM32(0x731F9C);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0010D47E; /* jle: less or equal (signed <=) */

loc_0010D452:
    ebx = MEM32(ebp + 8);
    edi = ebx + 0x278;
    goto loc_0010D460;

    /* nop */

loc_0010D460:
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x731E90);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0010D490(); /* call 0x0010D490 */

loc_0010D471:
    eax = MEM32(0x731F9C);
    esi++;
    edi = edi + 0xC;
    if (CMP_L(esi, eax)) goto loc_0010D460; /* jl: less (signed <) */

loc_0010D47E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
