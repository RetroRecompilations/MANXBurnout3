#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001986A0
 * Original: 0x001986A0 - 0x00198793 (243 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001986A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001986A0:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = 0x4A71A0;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0x27C) = 3;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_001986BC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001986D0; /* je: equal / zero */

loc_001986C0:
    SET_LO8(eax, MEM8(0x64B30C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001986D0; /* jne: not equal / not zero */

loc_001986C9:
    eax = esi;
    PUSH32(esp, 0); sub_00198390(); /* call 0x00198390 */

loc_001986D0:
    SET_LO8(eax, MEM8(esi + 0xA0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001986F6; /* jne: not equal / not zero */

loc_001986DA:
    if (CMP_NE(ebp, 1)) goto loc_001986F6; /* jne: not equal / not zero */

loc_001986DF:
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(eax + 0x1920);
    if (TEST_NZ(ecx, ecx)) goto loc_001986F6; /* jne: not equal / not zero */

loc_001986EF:
    MEM8(esi + 0xA2) = 1;

loc_001986F6:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00198700:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019875B; /* je: equal / zero */

loc_00198704:
    SET_LO8(eax, MEM8(0x64B30C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019875B; /* jne: not equal / not zero */

loc_0019870D:
    ecx = MEM32(0x735524);
    eax = MEM32(esi + 0x98);
    edx = (int32_t)MEMF(ecx + 0x3A8); /* cvttss2si */
    PUSH32(esp, edi);
    edi = (int32_t)MEMF(ecx + 0x3A4); /* cvttss2si */
    ecx = (int32_t)MEMF(ecx + 0x3A0); /* cvttss2si */
    if (CMP_L(eax, ecx)) goto loc_0019873F; /* jl: less (signed <) */

loc_00198736:
    MEM32(esi + 0x78) = 2;
    goto loc_0019875A;

loc_0019873F:
    if (CMP_L(eax, edi)) goto loc_0019874C; /* jl: less (signed <) */

loc_00198743:
    MEM32(esi + 0x78) = 1;
    goto loc_0019875A;

loc_0019874C:
    ecx = 0; /* xor self */
    /* cmp eax, edx - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax, edx)) ? 1 : 0); /* setge */
    ecx--;
    ecx = ecx & 4;
    MEM32(esi + 0x78) = ecx;

loc_0019875A:
    POP32(esp, edi);

loc_0019875B:
    if (CMP_EQ(ebp, 2)) goto loc_00198765; /* je: equal / zero */

loc_00198760:
    if (CMP_NE(ebp, 3)) goto loc_0019878F; /* jne: not equal / not zero */

loc_00198765:
    eax = MEM32(esi + 0x18);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_0019877E; /* jne: not equal / not zero */

loc_00198779:
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_0019877E:
    SET_LO8(eax, MEM8(esi + 0xA0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019878F; /* jne: not equal / not zero */

loc_00198788:
    MEM8(esi + 0xA1) = 1;

loc_0019878F:
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
