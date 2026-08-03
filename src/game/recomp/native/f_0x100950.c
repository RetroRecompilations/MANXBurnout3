#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100950
 * Original: 0x00100950 - 0x00100AFE (430 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100950:
    SET_LO8(eax, MEM8(esi + 0x4B0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00100AFD; /* je: equal / zero */

loc_0010095E:
    SET_LO8(eax, MEM8(esi + 0x5D4));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010098D; /* je: equal / zero */

loc_0010096B:
    SET_LO8(eax, MEM8(esi + 0x5D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010098D; /* jne: not equal / not zero */

loc_00100975:
    eax = MEM32(esi + 0x6F4);
    if (TEST_Z(eax, eax)) goto loc_0010098D; /* je: equal / zero */

loc_0010097F:
    /* cmp MEM32(0x5A3760), 0xFFFFFFFFu - flags set for next jcc */
    ebp = 0x3C;
    if (CMP_NE(MEM32(0x5A3760), 0xFFFFFFFFu)) goto loc_00100992; /* jne: not equal / not zero */

loc_0010098D:
    ebp = 0xA;

loc_00100992:
    ebx = MEM32(0x4A1D84);
    /* cmp LO16(ebx), 0xFFFF - flags set for next jcc */
    edi = MEM32(esi + 8);
    if (CMP_NE(LO16(ebx), 0xFFFF)) goto loc_001009A4; /* jne: not equal / not zero */

loc_001009A2:
    ebx = 0; /* xor self */

loc_001009A4:
    ecx = 0x572980;
    PUSH32(esp, 0); sub_001B8650(); /* call 0x001B8650 */

loc_001009AE:
    edx = MEM32(esi + 0xC);
    edi = MEM32(edx + 0x28);
    edi = (uint32_t)((int32_t)edi * (int32_t)ebp);
    ecx = eax;
    eax = ZX16(LO16(ebx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO8(ebx, 1);
    if (CMP_NE(edx, ecx)) goto loc_00100A1D; /* jne: not equal / not zero */

loc_001009C8:
    SET_LO8(eax, MEM8(esi + 0xC08));
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00100A1D; /* jne: not equal / not zero */

loc_001009D2:
    edx = MEM32(0x4A1D84);
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    ecx = edx;
    /* cmp LO16(ecx), 0xFFFF - flags set for next jcc */
    MEMF(esi + 0xC18) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO16(ecx), 0xFFFF)) goto loc_001009F3; /* jne: not equal / not zero */

loc_001009F1:
    ecx = 0; /* xor self */

loc_001009F3:
    if (TEST_Z(LO8(eax), 2)) goto loc_001009FF; /* je: equal / zero */

loc_001009F7:
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0xC08) = LO8(eax);

loc_001009FF:
    SET_LO8(eax, MEM8(esi + 0xC08));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(esi + 0xC0B) = 0xD;
    MEM16(esi + 0xC14) = LO16(ecx);
    MEM8(esi + 0xC08) = LO8(eax);
    goto loc_00100A23;

loc_00100A1D:
    edx = MEM32(0x4A1D84);

loc_00100A23:
    SET_LO8(eax, MEM8(esi + 0xC1C));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00100AA3; /* je: equal / zero */

loc_00100A2D:
    xmm0.f[0] = MEMF(esi + 0xC2C); /* movss */
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(esi + 0xC1C) = LO8(eax);
    eax = edx;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00100A47; /* jne: not equal / not zero */

loc_00100A45:
    eax = 0; /* xor self */

loc_00100A47:
    MEM16(esi + 0x4D84) = LO16(eax);
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(esi + 0x4D7C) = xmm1.f[0]; /* movss */
    SET_LO8(eax, MEM8(esi + 0xC30));
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_00100AA3; /* jne: not equal / not zero */

loc_00100A68:
    ecx = edx;
    /* cmp LO16(ecx), 0xFFFF - flags set for next jcc */
    MEMF(esi + 0xC40) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO16(ecx), 0xFFFF)) goto loc_00100A7B; /* jne: not equal / not zero */

loc_00100A79:
    ecx = 0; /* xor self */

loc_00100A7B:
    if (TEST_Z(LO8(eax), 2)) goto loc_00100A87; /* je: equal / zero */

loc_00100A7F:
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0xC30) = LO8(eax);

loc_00100A87:
    SET_LO8(eax, MEM8(esi + 0xC30));
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(esi + 0xC33) = 0xE;
    MEM16(esi + 0xC3C) = LO16(ecx);
    MEM8(esi + 0xC30) = LO8(eax);

loc_00100AA3:
    SET_LO8(eax, MEM8(esi + 0xC44));
    POP32(esp, edi);
    POP32(esp, ebp);
    /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00100AFD; /* je: equal / zero */

loc_00100AB0:
    xmm0.f[0] = MEMF(esi + 0xC54); /* movss */
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(esi + 0xC44) = LO8(eax);
    eax = edx;
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00100ACA; /* jne: not equal / not zero */

loc_00100AC8:
    eax = 0; /* xor self */

loc_00100ACA:
    MEM16(esi + 0x4D84) = LO16(eax);
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(esi + 0x4D7C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x4AE200); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16CC); /* mulss */
    MEMF(esi + 0x5D8) = xmm1.f[0]; /* movss */

loc_00100AFD:
    esp += 4; return; /* ret */

}
