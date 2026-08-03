#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3470
 * Original: 0x001A3470 - 0x001A38E8 (1144 bytes, 333 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3470:
    esp = esp - 0x14;
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(edx, MEM16(eax + 2));
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 4));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4C);
    PUSH32(esp, ebp);
    ebx = ebx + 0x60EC2C;
    /* cmp LO16(ecx), LO16(edx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    if (CMP_G(LO16(ecx), LO16(edx))) goto loc_001A34A0; /* jg: greater (signed >) */

loc_001A3494:
    esi = SX16(LO16(ecx));
    MEM32(esp + 0x14) = esi;
    ecx = SX16(LO16(edx));
    goto loc_001A34AC;

loc_001A34A0:
    edx = SX16(LO16(edx));
    MEM32(esp + 0x14) = edx;
    ecx = SX16(LO16(ecx));
    esi = edx;

loc_001A34AC:
    SET_LO8(eax, MEM8(eax + 5));
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebx + 4));
    MEM32(esp + 0x10) = ecx;
    edx = edi + esi;
    edi = edi + ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A34CE; /* jne: not equal / not zero */

loc_001A34C2:
    ecx = MEM32(esp + 0x28);
    if (CMP_NE(MEM8(ecx + 0x363BC), LO8(eax))) goto loc_001A34EC; /* jne: not equal / not zero */

loc_001A34CE:
    if (CMP_EQ(LO8(eax), 1)) goto loc_001A34DA; /* je: equal / zero */

loc_001A34D2:
    if (CMP_NE(LO8(eax), 2)) goto loc_001A3611; /* jne: not equal / not zero */

loc_001A34DA:
    eax = MEM32(esp + 0x28);
    SET_LO8(ecx, MEM8(eax + 0x363BC));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A3611; /* jne: not equal / not zero */

loc_001A34EC:
    if (CMP_A(LO16(edx), LO16(edi))) goto loc_001A3532; /* ja: above (unsigned >) */

loc_001A34F1:
    ebp = ZX16(LO16(edx));

loc_001A34F4:
    SET_LO16(eax, LO16(edx));
    SET_LO16(eax, LO16(eax) >> 2);
    ecx = ebp;
    ecx = ecx & 0x80000003u;
    esi = ZX16(LO16(eax));
    if (((int32_t)ecx >= 0)) goto loc_001A350D; /* jns: not sign (positive) */

loc_001A3508:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A350D:
    SET_LO8(eax, MEM8(esp + 0x34));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x498D80));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    edx++;
    ebp++;
    /* cmp LO16(edx), LO16(edi) - flags set for next jcc */
    MEM8(esi + 0x498D80) = LO8(ecx);
    if (CMP_BE(LO16(edx), LO16(edi))) goto loc_001A34F4; /* jbe: below or equal (unsigned <=) */

loc_001A352E:
    esi = MEM32(esp + 0x14);

loc_001A3532:
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019E5B0(); /* call 0x0019E5B0 */

loc_001A3543:
    edi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019E640(); /* call 0x0019E640 */

loc_001A3556:
    edx = MEM32(edi + 0x40);
    ecx = MEM32(edx + 4);
    edx = MEM32(esp + 0x28);
    ebx = MEM32(ecx + edx * 4);
    ebp = eax;
    eax = esi;
    esi = MEM32(esp + 0x10);
    if (CMP_G(ebx, esi)) goto loc_001A38E5; /* jg: greater (signed >) */

loc_001A3573:
    goto loc_001A3580;

loc_001A3575:
    eax = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x10);
    /* nop */

loc_001A3580:
    if (TEST_Z(ebp, ebp)) goto loc_001A3597; /* je: equal / zero */

loc_001A3584:
    ecx = MEM32(ebp + 0x40);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(edx + ecx * 4);
    if (CMP_G(ecx, esi)) goto loc_001A3597; /* jg: greater (signed >) */

loc_001A3595:
    esi = ecx;

loc_001A3597:
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_001A6070(); /* call 0x001A6070 */

loc_001A35B3:
    if (CMP_GE(esi, MEM32(esp + 0x10))) goto loc_001A38E5; /* jge: greater or equal (signed >=) */

loc_001A35BD:
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebp + 0x40);
    ebx = eax * 4;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = esi;
    esi = ebp + 0x40;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = ebp;
    PUSH32(esp, 0); sub_0019E640(); /* call 0x0019E640 */

loc_001A35F3:
    edx = MEM32(esp + 0x10);
    ebp = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    if (CMP_LE(MEM32(ebx + ecx), edx)) goto loc_001A3575; /* jle: less or equal (signed <=) */

loc_001A3607:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_001A3611:
    if (CMP_A(LO16(edx), LO16(edi))) goto loc_001A3660; /* ja: above (unsigned >) */

loc_001A3616:
    ebp = ZX16(LO16(edx));
    /* nop */

loc_001A3620:
    SET_LO16(eax, LO16(edx));
    SET_LO16(eax, LO16(eax) >> 2);
    ecx = ebp;
    ecx = ecx & 0x80000003u;
    esi = ZX16(LO16(eax));
    if (((int32_t)ecx >= 0)) goto loc_001A3639; /* jns: not sign (positive) */

loc_001A3634:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A3639:
    SET_LO8(eax, MEM8(esp + 0x34));
    SET_LO8(ebx, MEM8(esi + 0x498D80));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    edx++;
    ebp++;
    /* cmp LO16(edx), LO16(edi) - flags set for next jcc */
    MEM8(esi + 0x498D80) = LO8(ebx);
    if (CMP_BE(LO16(edx), LO16(edi))) goto loc_001A3620; /* jbe: below or equal (unsigned <=) */

loc_001A365C:
    esi = MEM32(esp + 0x14);

loc_001A3660:
    if (CMP_G(esi, MEM32(esp + 0x10))) goto loc_001A38E5; /* jg: greater (signed >) */

loc_001A366A:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B1694); /* movss */
    xmm6.f[0] = MEMF(0x3B16E4); /* movss */
    xmm5.f[0] = MEMF(0x3B16C0); /* movss */
    SET_LO8(ebx, 0xFF);
    goto loc_001A3690;

    /* nop */

loc_001A3690:
    ecx = MEM32(esp + 0x18);
    SET_LO16(esi, MEM16(ecx + 4));
    edx = MEM32(esp + 0x28);
    edi = MEM32(edx + 0x3639C);
    ecx = MEM32(esp + 0x14);
    eax = ZX16(LO16(esi));
    eax = eax + edi;
    SET_LO8(eax, MEM8(eax + ecx));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001A38E5; /* je: equal / zero */

loc_001A36B6:
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    xmm1.f[0] = MEMF(eax + edx + 0x2A500); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    eax = eax + edx + 0x2A4D0;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001A38E5; /* ja: above (unsigned >) */

loc_001A36DE:
    ecx = ZX8(MEM8(eax + 0x4A));
    ecx = ecx + ecx * 2;
    ecx = ecx << 7;
    SET_LO8(eax, MEM8(ecx + edx + 0x12944));
    /* test LO8(eax), 4 - flags set for next jcc */
    edi = ecx + edx + 0x127D0;
    ebp = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(LO8(eax), 4)) goto loc_001A370F; /* je: equal / zero */

loc_001A3702:
    if (CMP_NE(MEM8(edi + 0x173), 8)) goto loc_001A38E5; /* jne: not equal / not zero */

loc_001A370F:
    eax = MEM32(edi + 0x10C);
    if (TEST_NZ(eax, eax)) goto loc_001A38E5; /* jne: not equal / not zero */

loc_001A371D:
    SET_LO8(ecx, MEM8(edx + 0x363B9));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = esi + ebp;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A3763; /* je: equal / zero */

loc_001A372A:
    ecx = ZX16(LO16(eax));
    edx = ecx;
    edx = edx >> 2;
    SET_LO8(eax, MEM8(edx + 0x498D80));
    edx = MEM32(esp + 0x34);
    /* test edx, edx - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(edx, edx)) ? 1 : 0); /* sete */
    ecx = ecx & 0x80000003u;
    if (((int32_t)ecx >= 0)) goto loc_001A374E; /* jns: not sign (positive) */

loc_001A3749:
    ecx--;
    ecx = ecx | 0xFFFFFFFCu;
    ecx++;

loc_001A374E:
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) + LO8(edx));
    SET_LO8(edx, 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    /* test LO8(eax), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A38D6; /* jne: not equal / not zero */

loc_001A3763:
    SET_LO8(edx, MEM8(edi + 0x17A));
    eax = MEM32(edi + 0x114);
    SET_LO8(edx, LO8(edx) | 1);
    /* test eax, eax - flags set for next jcc */
    MEM8(edi + 0x17A) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_001A387C; /* je: equal / zero */

loc_001A3780:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A06F0(); /* call 0x001A06F0 */

loc_001A3786:
    eax = MEM32(edi + 0x114);
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_001A3791:
    eax = MEM32(edi + 0x114);
    MEM8(eax + 0x4B) = MEM8(eax + 0x4B) & 0xE2;
    ecx = 0xFFFF;
    MEM16(eax + 0x3C) = LO16(ecx);
    MEM16(eax + 0x3E) = LO16(ecx);
    MEM8(eax + 0x44) = LO8(ebx);
    MEM8(eax + 0x46) = 0;
    MEM32(eax + 0x38) = 0;
    MEM8(eax + 0x47) = LO8(ebx);
    MEM8(eax + 0x41) = LO8(ebx);
    MEM8(eax + 0x45) = LO8(ebx);
    MEMF(eax + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm6.f[0]; /* movss */
    MEM8(eax + 0x4A) = LO8(ebx);
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    MEM8(eax + 0x4D) = 0;
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEM8(eax + 0x40) = LO8(ebx);
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEM8(eax + 0x4C) = 0;
    MEM8(eax + 0x48) = 0;
    MEM8(eax + 0x42) = LO8(ebx);
    MEM8(eax + 0x43) = LO8(ebx);
    ecx = MEM32(0x649B4C);
    SET_LO8(edx, MEM8(ecx + 0x49));
    MEM8(eax + 0x44) = LO8(edx);
    MEM32(0x649B4C) = eax;
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 5);
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    SET_LO16(edx, ZX8(LO8(edx)));
    edx = ZX16(LO16(edx));
    if (((int32_t)ecx >= 0)) goto loc_001A384C; /* jns: not sign (positive) */

loc_001A3847:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A384C:
    ebp = MEM32(edx * 4 + 0x649AE0);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = ~esi;
    ebp = ebp & esi;
    MEM32(edx * 4 + 0x649AE0) = ebp;
    SET_LO8(ecx, MEM8(eax + 0x4B));
    ebp = MEM32(esp + 0x14);
    SET_LO8(ecx, LO8(ecx) & 0xF7);
    MEM8(eax + 0x4B) = LO8(ecx);
    MEM32(edi + 0x114) = 0;

loc_001A387C:
    eax = MEM32(edi + 0x118);
    if (TEST_Z(eax, eax)) goto loc_001A3898; /* je: equal / zero */

loc_001A3886:
    MEM32(edi + 0x118) = 0;
    MEMF(edi + 0x11C) = xmm5.f[0]; /* movss */

loc_001A3898:
    SET_LO8(eax, MEM8(0x649B97));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(edi + 0x110);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A38AD; /* je: equal / zero */

loc_001A38A7:
    if (TEST_Z(ecx, ecx)) goto loc_001A38BF; /* je: equal / zero */

loc_001A38AB:
    goto loc_001A38BA;

loc_001A38AD:
    if (TEST_Z(ecx, ecx)) goto loc_001A38BF; /* je: equal / zero */

loc_001A38B1:
    if (TEST_NZ(MEM8(edi + 0x174), 2)) goto loc_001A38BF; /* jne: not equal / not zero */

loc_001A38BA:
    PUSH32(esp, 0); sub_001A75A0(); /* call 0x001A75A0 */

loc_001A38BF:
    PUSH32(esp, 1);
    eax = edi;
    esi = 0x6137E0;
    PUSH32(esp, 0); sub_001A3970(); /* call 0x001A3970 */

loc_001A38CD:
    MEM8(edi + 0x174) = 0;
    goto loc_001A38DB;

loc_001A38D6:
    ebp++;
    MEM32(esp + 0x14) = ebp;

loc_001A38DB:
    if (CMP_LE(ebp, MEM32(esp + 0x10))) goto loc_001A3690; /* jle: less or equal (signed <=) */

loc_001A38E5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

}
