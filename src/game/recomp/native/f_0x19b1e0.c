#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B1E0
 * Original: 0x0019B1E0 - 0x0019B437 (599 bytes, 195 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B1E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B1E0:
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 4);
    xmm1.f[0] = MEMF(0x60EA20); /* movss */
    ecx = 0; /* xor self */
    /* cmp eax, ecx - flags set for next jcc */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (CMP_EQ(eax, ecx)) goto loc_0019B433; /* je: equal / zero */

loc_0019B1FF:
    eax = MEM32(0x4D6664);
    eax++;
    /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x4D6664) = eax;
    if (CMP_NE(eax, 2)) goto loc_0019B22B; /* jne: not equal / not zero */

loc_0019B20F:
    eax = MEM32(0x4D6660);
    eax++;
    /* cmp eax, 0x11 - flags set for next jcc */
    MEM32(0x4D6664) = ecx;
    MEM32(0x4D6660) = eax;
    if (CMP_NE(eax, 0x11)) goto loc_0019B22B; /* jne: not equal / not zero */

loc_0019B225:
    MEM32(0x4D6660) = ecx;

loc_0019B22B:
    eax = MEM32(edx + 4);
    SET_LO16(eax, MEM16(eax + 0xE));
    if (CMP_LE(LO16(eax), LO16(ecx))) goto loc_0019B433; /* jle: less or equal (signed <=) */

loc_0019B23B:
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    if (CMP_LE(LO16(eax), LO16(ecx))) goto loc_0019B432; /* jle: less or equal (signed <=) */

loc_0019B247:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0019B252;

loc_0019B24C:
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */

loc_0019B252:
    eax = MEM32(edx + 4);
    ecx = MEM32(eax + 0x10);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebp * 2);
    eax = MEM32(eax + 8);
    edx = ecx + ecx * 4;
    SET_LO8(ecx, MEM8(eax + edx * 8 + 0x11));
    /* cmp LO8(ecx), 1 - flags set for next jcc */
    esi = eax + edx * 8;
    if (CMP_LE(LO8(ecx), 1)) goto loc_0019B3DF; /* jle: less or equal (signed <=) */

loc_0019B272:
    xmm0.f[0] = MEMF(esi + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1C); /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0019B41B; /* jbe: below or equal (unsigned <=) */

loc_0019B285:
    /* test MEM8(esi + 0x25), 1 - flags set for next jcc */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    if (TEST_Z(MEM8(esi + 0x25), 1)) goto loc_0019B373; /* je: equal / zero */

loc_0019B294:
    SET_LO8(eax, MEM8(esi + 0x13));
    SET_LO8(ebx, MEM8(esi + 0x10));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM8(esi + 0x10) = LO8(ebx);
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(LO8(eax), 1)) goto loc_0019B2B6; /* jne: not equal / not zero */

loc_0019B2A5:
    edi = SX8(LO8(ecx));
    ebx = SX8(LO8(edx));
    edi--;
    if (CMP_L(ebx, edi)) goto loc_0019B2B6; /* jl: less (signed <) */

loc_0019B2B0:
    MEM8(esi + 0x13) = 0xFF;
    goto loc_0019B2C6;

loc_0019B2B6:
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019B2C6; /* jne: not equal / not zero */

loc_0019B2BA:
    if (CMP_G(LO8(edx) & LO8(edx), 0)) goto loc_0019B2C6; /* jg: greater (signed >) */

loc_0019B2BE:
    MEM8(esi + 0x13) = 1;
    MEM8(esi + 0x12) = 1;

loc_0019B2C6:
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    eax = edi + 1;
    ecx = SX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    /* cmp MEM8(esi + 0x13), 0xFF - flags set for next jcc */
    SET_LO8(ebx, LO8(edx));
    if (CMP_NE(MEM8(esi + 0x13), 0xFF)) goto loc_0019B32D; /* jne: not equal / not zero */

loc_0019B2DB:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0019B2EA; /* jne: not equal / not zero */

loc_0019B2DF:
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x18) = edx;
    goto loc_0019B41B;

loc_0019B2EA:
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    eax = eax + 0x48;
    ebx = eax + 1;

loc_0019B2F5:
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0019B2F5; /* jne: not equal / not zero */

loc_0019B2FC:
    ecx = MEM32(ecx + edi * 4);
    eax = eax - ebx;
    eax = ecx + eax + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243A41(); /* call 0x00243A41 */

loc_0019B30B:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x12);
    ecx = SX8(LO8(eax));
    esp = esp + 4;
    edx = edx - ecx;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x12) = LO8(eax);
    goto loc_0019B41B;

loc_0019B32D:
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    eax = eax + 0x48;
    edi = eax + 1;

loc_0019B338:
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0019B338; /* jne: not equal / not zero */

loc_0019B33F:
    edx = SX8(LO8(ebx));
    ecx = MEM32(ecx + edx * 4);
    eax = eax - edi;
    eax = ecx + eax + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243A41(); /* call 0x00243A41 */

loc_0019B351:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x12);
    ecx = SX8(LO8(eax));
    esp = esp + 4;
    ecx = ecx - edx;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x12) = LO8(eax);
    goto loc_0019B41B;

loc_0019B373:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    eax++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = SX8(LO8(ecx));
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = SX8(LO8(edx));
    eax++;
    MEM8(esi + 0x10) = LO8(edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0019B39C; /* jne: not equal / not zero */

loc_0019B38C:
    edx = MEM32(esi + 0x14);
    SET_LO8(eax, 1);
    MEM32(esi + 0x18) = edx;
    MEM8(esi + 0x12) = LO8(eax);
    goto loc_0019B41B;

loc_0019B39C:
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    eax = eax + 0x48;
    edi = eax + 1;

loc_0019B3A7:
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0019B3A7; /* jne: not equal / not zero */

loc_0019B3AE:
    edx = SX8(LO8(edx));
    ecx = MEM32(ecx + edx * 4);
    eax = eax - edi;
    eax = ecx + eax + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243A41(); /* call 0x00243A41 */

loc_0019B3C0:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x12);
    ecx = SX8(LO8(eax));
    esp = esp + 4;
    ecx = ecx - edx;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x12) = LO8(eax);
    goto loc_0019B41B;

loc_0019B3DF:
    if (TEST_Z(MEM8(esi + 0x25), 2)) goto loc_0019B41B; /* je: equal / zero */

loc_0019B3E5:
    xmm0.f[0] = MEMF(esi + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esi + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1C); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_0019B41B; /* jb: below (unsigned <) */

loc_0019B3FD:
    xmm2.f[0] = MEMF(esi + 0x18); /* movss */
    /* ucomiss xmm2.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0019B416; /* jnp: not parity */

loc_0019B40F:
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0019B41B;

loc_0019B416:
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */

loc_0019B41B:
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_0019B24C; /* jl: less (signed <) */

loc_0019B42F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0019B432:
    POP32(esp, ebp);

loc_0019B433:
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
