#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC3E0
 * Original: 0x001CC3E0 - 0x001CC6FD (797 bytes, 255 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC3E0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CC3E0:
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x36));
    eax = eax << 3;
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    eax = esi;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CCDD0(); /* call 0x001CCDD0 */

loc_001CC410:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CC6E0; /* je: equal / zero */

loc_001CC418:
    SET_LO8(eax, MEM8(esi + 0x3E));
    if (CMP_AE(LO8(eax), MEM8(0x3F7BD6))) goto loc_001CC428; /* jae: above or equal (unsigned >=) */

loc_001CC423:
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x3E) = LO8(eax);

loc_001CC428:
    xmm1.f[0] = MEMF(edi + 0x3C); /* movss */
    /* ucomiss xmm1.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CC464; /* jnp: not parity */

loc_001CC43A:
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x3C);
    MEM32(eax + 0x7C) = ecx;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC464; /* je: equal / zero */

loc_001CC44D:
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC45B:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;

loc_001CC464:
    xmm1.f[0] = MEMF(edi + 0x38); /* movss */
    /* ucomiss xmm1.f[0], MEMF(0x3B16BC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CC4A9; /* jnp: not parity */

loc_001CC476:
    eax = MEM32(edi + 0x38);
    edx = MEM32(esi + 0xC);
    MEM32(edx + 0x80) = eax;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC4A3; /* je: equal / zero */

loc_001CC48C:
    edx = MEM32(edi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC49A:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    esp = esp + 0x10;

loc_001CC4A3:
    eax = MEM32(edi + 0x38);
    MEM32(esi + 0x2C) = eax;

loc_001CC4A9:
    xmm1.f[0] = MEMF(edi + 0x24); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm2.f[0])) goto loc_001CC4BC; /* jb: below (unsigned <) */

loc_001CC4B6:
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x20) = ecx;

loc_001CC4BC:
    if (TEST_Z(MEM8(esi + 0x37), 0x10)) goto loc_001CC4EE; /* je: equal / zero */

loc_001CC4C2:
    xmm1.f[0] = MEMF(esi + 0x20); /* movss */
    edx = MEM32(esi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx + 0x78) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC538; /* je: equal / zero */

loc_001CC4DD:
    xmm1.f[0] = MEMF(esi + 0x20); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_001CC528;

loc_001CC4EE:
    xmm3.f[0] = MEMF(esi + 0x20); /* movss */
    xmm1.f[0] = MEMF(0x4A1EEC); /* movss */
    ecx = MEM32(esi + 0xC);
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x78) = xmm3.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC538; /* je: equal / zero */

loc_001CC515:
    xmm2.f[0] = MEMF(esi + 0x20); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    PUSH32(esp, ecx);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm2.f[0]; /* movss */

loc_001CC528:
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC532:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;

loc_001CC538:
    xmm0.f[0] = MEMF(edi + 0x1C); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    if ((xmm0.f[0] < xmm2.f[0])) goto loc_001CC566; /* jb: below (unsigned <) */

loc_001CC54A:
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001CC559; /* jbe: below or equal (unsigned <=) */

loc_001CC554:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    goto loc_001CC561;

loc_001CC559:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CC561; /* jbe: below or equal (unsigned <=) */

loc_001CC55E:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_001CC561:
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_001CC566:
    SET_LO8(eax, MEM8(esi + 0x3F));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esi + 0x1C); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CC57A; /* jne: not equal / not zero */

loc_001CC572:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1EF0); /* mulss */

loc_001CC57A:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001CC593; /* jbe: below or equal (unsigned <=) */

loc_001CC58B:
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    goto loc_001CC59E;

loc_001CC593:
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CC59E; /* jbe: below or equal (unsigned <=) */

loc_001CC598:
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_001CC59E:
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CC5AD:
    ecx = MEM32(esi + 0xC);
    MEM8(ecx + 0x85) = LO8(eax);
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC5D2; /* je: equal / zero */

loc_001CC5C0:
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC5CF:
    esp = esp + 0x10;

loc_001CC5D2:
    xmm1.f[0] = MEMF(edi + 0xC); /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    ecx = edi + 0xC;
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (1 /* jp after test - parity */) goto loc_001CC608; /* jp: parity */

loc_001CC5EC:
    xmm1.f[0] = MEMF(edi + 0x10); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CC608; /* jp: parity */

loc_001CC5FA:
    xmm1.f[0] = MEMF(edi + 0x14); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CC640; /* jnp: not parity */

loc_001CC608:
    edx = MEM32(esi + 0xC);
    edx = edx + 0x3C;
    eax = ecx;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(edx + 4) = ebx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC640; /* je: equal / zero */

loc_001CC62A:
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001CC635:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    esp = esp + 0x10;

loc_001CC640:
    xmm1.f[0] = MEMF(edi); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CC669; /* jp: parity */

loc_001CC64D:
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001CC669; /* jp: parity */

loc_001CC65B:
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CC699; /* jnp: not parity */

loc_001CC669:
    eax = MEM32(esi + 0xC);
    eax = eax + 0x30;
    ecx = edi;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC699; /* je: equal / zero */

loc_001CC68B:
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBAE0(); /* call 0x001FBAE0 */

loc_001CC696:
    esp = esp + 0x10;

loc_001CC699:
    ebx = MEM32(edi + 0x40);
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_001CC6CE; /* je: equal / zero */

loc_001CC6A1:
    eax = MEM32(edi + 0x18);
    PUSH32(esp, 0); sub_001CE000(); /* call 0x001CE000 */

loc_001CC6A9:
    if (CMP_AE(ebx, eax)) goto loc_001CC6CE; /* jae: above or equal (unsigned >=) */

loc_001CC6AD:
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0x6C) = ebx;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001CC6CE; /* je: equal / zero */

loc_001CC6BD:
    edx = MEM32(edi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB40(); /* call 0x001FBB40 */

loc_001CC6CB:
    esp = esp + 0x10;

loc_001CC6CE:
    POP32(esp, ebx);
    MEM8(esi) = 0;
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CC6D7:
    MEM8(esi + 0x37) = MEM8(esi + 0x37) | 0x20;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001CC6E0:
    SET_LO8(eax, MEM8(esi + 0x37));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_001CC6EF; /* jns: not sign (positive) */

loc_001CC6E7:
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(esi) = 1;
    MEM8(esi + 0x37) = LO8(eax);

loc_001CC6EF:
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CC6F4:
    MEM8(esi + 0x37) = MEM8(esi + 0x37) | 0x20;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
