#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021B40
 * Original: 0x00021B40 - 0x00021BD6 (150 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021B40:
    SET_LO8(eax, MEM8(edi + 0xB7C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00021BD5; /* jne: not equal / not zero */

loc_00021B4E:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    ebp = edi + 0xB44;
    /* nop */

loc_00021B60:
    SET_LO8(eax, MEM8(edi + ebx + 0xB3B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021BC9; /* je: equal / zero */

loc_00021B6B:
    SET_LO8(ecx, LO8(ebx));
    edx = edi;
    PUSH32(esp, 0); sub_00017C50(); /* call 0x00017C50 */

loc_00021B74:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00021BC9; /* je: equal / zero */

loc_00021B78:
    eax = (uint32_t)(int32_t)SMEM8(ebx + edi + 0xB39);
    eax = eax + eax * 8;
    eax = eax << 5;
    SET_LO8(ecx, MEM8(eax + edi + 0xA0));
    eax = eax + edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00021BC9; /* je: equal / zero */

loc_00021B93:
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    PUSH32(esp, ecx);
    esi = eax + 0x98;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B50C0(); /* call 0x001B50C0 */

loc_00021BB1:
    xmm0.f[0] = MEMF(ebp); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001B5120(); /* call 0x001B5120 */

loc_00021BC9:
    ebx++;
    ebp = ebp + 4;
    if (CMP_B(ebx, 2)) goto loc_00021B60; /* jb: below (unsigned <) */

loc_00021BD2:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00021BD5:
    esp += 4; return; /* ret */

}
