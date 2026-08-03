#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AB1A0
 * Original: 0x001AB1A0 - 0x001AB55C (956 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AB1A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001AB1A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x12B778);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001AB520; /* jle: less or equal (signed <=) */

loc_001AB1B8:
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001AB1FA; /* jle: less or equal (signed <=) */

loc_001AB1BE:
    edi = MEM32(eax + 0x12B768);
    MEM32(esp + 0xC) = ecx;

loc_001AB1C8:
    edx = ZX16(MEM16(edi + 0xC));
    edx++;
    if (CMP_LE(edx & edx, 0)) goto loc_001AB1EC; /* jle: less or equal (signed <=) */

loc_001AB1D1:
    ecx = MEM32(edi);
    esi = edx;

loc_001AB1D5:
    edx = ZX16(MEM16(ecx));
    /* cmp edx, ebx - flags set for next jcc */
    if (CMP_G(edx, ebx)) ebx = edx; /* cmovg */
    edx = ZX16(MEM16(ecx + 2));
    /* cmp edx, ebx - flags set for next jcc */
    if (CMP_G(edx, ebx)) ebx = edx; /* cmovg */
    ecx = ecx + 4;
    esi--;
    if ((esi != 0)) goto loc_001AB1D5; /* jne: not equal / not zero */

loc_001AB1EC:
    ecx = MEM32(esp + 0xC);
    edi = edi + 0x10;
    ecx--;
    MEM32(esp + 0xC) = ecx;
    if ((ecx != 0)) goto loc_001AB1C8; /* jne: not equal / not zero */

loc_001AB1FA:
    /* cmp ebx, 4 - flags set for next jcc */
    ecx = MEM32(eax + 0x12B774);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x144360), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x144370), xmm0.b, 16); /* movaps */
    edx = 1;
    if (CMP_L(ebx, 4)) goto loc_001AB471; /* jl: less (signed <) */

loc_001AB222:
    edx = MEM32(eax + 0x12B774);
    ecx = edx + 0x18;
    esi = ebx;
    edx = edx + 0x28;
    esi = esi >> 2;
    edi = esi * 4 + 1;
    MEM32(esp + 0xC) = edi;
    edi = edi;

loc_001AB240:
    xmm0.f[0] = MEMF(ecx + -8); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144370) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144370))) goto loc_001AB257; /* jbe: below or equal (unsigned <=) */

loc_001AB24E:
    edi = MEM32(ecx + -8);
    MEM32(eax + 0x144370) = edi;

loc_001AB257:
    xmm0.f[0] = MEMF(ecx + -4); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144374) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144374))) goto loc_001AB26E; /* jbe: below or equal (unsigned <=) */

loc_001AB265:
    edi = MEM32(ecx + -4);
    MEM32(eax + 0x144374) = edi;

loc_001AB26E:
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144378) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144378))) goto loc_001AB283; /* jbe: below or equal (unsigned <=) */

loc_001AB27B:
    edi = MEM32(ecx);
    MEM32(eax + 0x144378) = edi;

loc_001AB283:
    xmm0.f[0] = MEMF(eax + 0x144360); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + -8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + -8))) goto loc_001AB29A; /* jbe: below or equal (unsigned <=) */

loc_001AB291:
    edi = MEM32(ecx + -8);
    MEM32(eax + 0x144360) = edi;

loc_001AB29A:
    xmm0.f[0] = MEMF(eax + 0x144364); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + -4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + -4))) goto loc_001AB2B1; /* jbe: below or equal (unsigned <=) */

loc_001AB2A8:
    edi = MEM32(ecx + -4);
    MEM32(eax + 0x144364) = edi;

loc_001AB2B1:
    xmm0.f[0] = MEMF(eax + 0x144368); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx))) goto loc_001AB2C6; /* jbe: below or equal (unsigned <=) */

loc_001AB2BE:
    edi = MEM32(ecx);
    MEM32(eax + 0x144368) = edi;

loc_001AB2C6:
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144370) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144370))) goto loc_001AB2DD; /* jbe: below or equal (unsigned <=) */

loc_001AB2D4:
    edi = MEM32(ecx + 8);
    MEM32(eax + 0x144370) = edi;

loc_001AB2DD:
    xmm0.f[0] = MEMF(edx + -4); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144374) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144374))) goto loc_001AB2F4; /* jbe: below or equal (unsigned <=) */

loc_001AB2EB:
    edi = MEM32(edx + -4);
    MEM32(eax + 0x144374) = edi;

loc_001AB2F4:
    xmm0.f[0] = MEMF(edx); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144378) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144378))) goto loc_001AB309; /* jbe: below or equal (unsigned <=) */

loc_001AB301:
    edi = MEM32(edx);
    MEM32(eax + 0x144378) = edi;

loc_001AB309:
    xmm0.f[0] = MEMF(eax + 0x144360); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 8))) goto loc_001AB320; /* jbe: below or equal (unsigned <=) */

loc_001AB317:
    edi = MEM32(ecx + 8);
    MEM32(eax + 0x144360) = edi;

loc_001AB320:
    xmm0.f[0] = MEMF(eax + 0x144364); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + -4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + -4))) goto loc_001AB337; /* jbe: below or equal (unsigned <=) */

loc_001AB32E:
    edi = MEM32(edx + -4);
    MEM32(eax + 0x144364) = edi;

loc_001AB337:
    xmm0.f[0] = MEMF(eax + 0x144368); /* movss */
    /* comiss xmm0.f[0], MEMF(edx) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx))) goto loc_001AB34C; /* jbe: below or equal (unsigned <=) */

loc_001AB344:
    edi = MEM32(edx);
    MEM32(eax + 0x144368) = edi;

loc_001AB34C:
    xmm0.f[0] = MEMF(ecx + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144370) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144370))) goto loc_001AB363; /* jbe: below or equal (unsigned <=) */

loc_001AB35A:
    edi = MEM32(ecx + 0x18);
    MEM32(eax + 0x144370) = edi;

loc_001AB363:
    xmm0.f[0] = MEMF(edx + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144374) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144374))) goto loc_001AB37A; /* jbe: below or equal (unsigned <=) */

loc_001AB371:
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x144374) = edi;

loc_001AB37A:
    xmm0.f[0] = MEMF(edx + 0x10); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144378) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144378))) goto loc_001AB391; /* jbe: below or equal (unsigned <=) */

loc_001AB388:
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x144378) = edi;

loc_001AB391:
    xmm0.f[0] = MEMF(eax + 0x144360); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x18))) goto loc_001AB3A8; /* jbe: below or equal (unsigned <=) */

loc_001AB39F:
    edi = MEM32(ecx + 0x18);
    MEM32(eax + 0x144360) = edi;

loc_001AB3A8:
    xmm0.f[0] = MEMF(eax + 0x144364); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0xC))) goto loc_001AB3BF; /* jbe: below or equal (unsigned <=) */

loc_001AB3B6:
    edi = MEM32(edx + 0xC);
    MEM32(eax + 0x144364) = edi;

loc_001AB3BF:
    xmm0.f[0] = MEMF(eax + 0x144368); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x10))) goto loc_001AB3D6; /* jbe: below or equal (unsigned <=) */

loc_001AB3CD:
    edi = MEM32(edx + 0x10);
    MEM32(eax + 0x144368) = edi;

loc_001AB3D6:
    xmm0.f[0] = MEMF(ecx + 0x28); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144370) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144370))) goto loc_001AB3ED; /* jbe: below or equal (unsigned <=) */

loc_001AB3E4:
    edi = MEM32(ecx + 0x28);
    MEM32(eax + 0x144370) = edi;

loc_001AB3ED:
    xmm0.f[0] = MEMF(edx + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144374) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144374))) goto loc_001AB404; /* jbe: below or equal (unsigned <=) */

loc_001AB3FB:
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x144374) = edi;

loc_001AB404:
    xmm0.f[0] = MEMF(edx + 0x20); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144378) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144378))) goto loc_001AB41B; /* jbe: below or equal (unsigned <=) */

loc_001AB412:
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x144378) = edi;

loc_001AB41B:
    xmm0.f[0] = MEMF(eax + 0x144360); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 0x28) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x28))) goto loc_001AB432; /* jbe: below or equal (unsigned <=) */

loc_001AB429:
    edi = MEM32(ecx + 0x28);
    MEM32(eax + 0x144360) = edi;

loc_001AB432:
    xmm0.f[0] = MEMF(eax + 0x144364); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x1C))) goto loc_001AB449; /* jbe: below or equal (unsigned <=) */

loc_001AB440:
    edi = MEM32(edx + 0x1C);
    MEM32(eax + 0x144364) = edi;

loc_001AB449:
    xmm0.f[0] = MEMF(eax + 0x144368); /* movss */
    /* comiss xmm0.f[0], MEMF(edx + 0x20) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x20))) goto loc_001AB460; /* jbe: below or equal (unsigned <=) */

loc_001AB457:
    edi = MEM32(edx + 0x20);
    MEM32(eax + 0x144368) = edi;

loc_001AB460:
    ecx = ecx + 0x40;
    edx = edx + 0x40;
    esi--;
    if ((esi != 0)) goto loc_001AB240; /* jne: not equal / not zero */

loc_001AB46D:
    edx = MEM32(esp + 0xC);

loc_001AB471:
    if (CMP_G(edx, ebx)) goto loc_001AB520; /* jg: greater (signed >) */

loc_001AB479:
    edi = MEM32(eax + 0x12B774);
    ecx = edx;
    ecx = ecx << 4;
    ebx = ebx - edx;
    ecx = ecx + edi;
    ebx++;
    edx = ebx;
    goto loc_001AB490;

    /* nop */

loc_001AB490:
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144370) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144370))) goto loc_001AB4A5; /* jbe: below or equal (unsigned <=) */

loc_001AB49D:
    esi = MEM32(ecx);
    MEM32(eax + 0x144370) = esi;

loc_001AB4A5:
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144374) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144374))) goto loc_001AB4BC; /* jbe: below or equal (unsigned <=) */

loc_001AB4B3:
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x144374) = esi;

loc_001AB4BC:
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x144378) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x144378))) goto loc_001AB4D3; /* jbe: below or equal (unsigned <=) */

loc_001AB4CA:
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x144378) = esi;

loc_001AB4D3:
    xmm0.f[0] = MEMF(eax + 0x144360); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx))) goto loc_001AB4E8; /* jbe: below or equal (unsigned <=) */

loc_001AB4E0:
    esi = MEM32(ecx);
    MEM32(eax + 0x144360) = esi;

loc_001AB4E8:
    xmm0.f[0] = MEMF(eax + 0x144364); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 4))) goto loc_001AB4FF; /* jbe: below or equal (unsigned <=) */

loc_001AB4F6:
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x144364) = esi;

loc_001AB4FF:
    xmm0.f[0] = MEMF(eax + 0x144368); /* movss */
    /* comiss xmm0.f[0], MEMF(ecx + 8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 8))) goto loc_001AB516; /* jbe: below or equal (unsigned <=) */

loc_001AB50D:
    esi = MEM32(ecx + 8);
    MEM32(eax + 0x144368) = esi;

loc_001AB516:
    ecx = ecx + 0x10;
    edx--;
    if ((edx != 0)) goto loc_001AB490; /* jne: not equal / not zero */

loc_001AB520:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x144370), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x144360), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    POP32(esp, edi);
    /* shufps xmm0, xmm0, 0 */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    POP32(esp, esi);
    /* divps: xmm2.f[0] /= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x144350), xmm2.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
