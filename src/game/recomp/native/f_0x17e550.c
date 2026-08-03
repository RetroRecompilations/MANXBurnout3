#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017E550
 * Original: 0x0017E550 - 0x0017E5F5 (165 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0017E550:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x30;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(ecx));
    /* cmp LO8(eax), 3 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_NE(LO8(eax), 3)) goto loc_0017E5A2; /* jne: not equal / not zero */

loc_0017E574:
    eax = MEM32(ecx + 0xC);
    xmm0.f[0] = MEMF(eax + 0xC4); /* movss */
    eax = MEM32(ecx + 4);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = esp + 0xC;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    goto loc_0017E5D2;

loc_0017E5A2:
    if (CMP_EQ(LO8(eax), 2)) goto loc_0017E5BA; /* je: equal / zero */

loc_0017E5A6:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017E5BA; /* je: equal / zero */

loc_0017E5AA:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0017E5BA; /* je: equal / zero */

loc_0017E5AE:
    if (CMP_EQ(LO8(eax), 4)) goto loc_0017E5BA; /* je: equal / zero */

loc_0017E5B2:
    if (CMP_EQ(LO8(eax), 6)) goto loc_0017E5BA; /* je: equal / zero */

loc_0017E5B6:
    if (CMP_NE(LO8(eax), 7)) goto loc_0017E5D2; /* jne: not equal / not zero */

loc_0017E5BA:
    edx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_0017E5CA:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */

loc_0017E5D2:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
