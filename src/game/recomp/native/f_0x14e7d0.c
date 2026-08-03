#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014E7D0
 * Original: 0x0014E7D0 - 0x0014E95E (398 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014E7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0014E7D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    eax = MEM32(esi + 0x24);
    /* cmp MEM8(eax), 2 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_NE(MEM8(eax), 2)) goto loc_0014E88B; /* jne: not equal / not zero */

loc_0014E7F7:
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x28);
    SET_LO8(ecx, MEM8(ecx));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(edx + 0x13F4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    xmm0.f[0] = MEMF(edx + 0xBC); /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0014E822; /* je: equal / zero */

loc_0014E818:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0014E822; /* je: equal / zero */

loc_0014E81D:
    if (CMP_NE(LO8(ecx), 2)) goto loc_0014E830; /* jne: not equal / not zero */

loc_0014E822:
    xmm1.f[0] = MEMF(0x3A2D50); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0014E830:
    eax = eax << 6;
    ecx = MEM32(eax + ebx + 0x48);
    /* cmp ecx, 0x19 - flags set for next jcc */
    eax = eax + ebx + 0x10;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEM32(eax + 0x34) = 0;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    if (CMP_GE(ecx, 0x19)) goto loc_0014E863; /* jge: greater or equal (signed >=) */

loc_0014E85D:
    ecx = ecx + 2;
    MEM32(eax + 0x38) = ecx;

loc_0014E863:
    MEM8(eax + 0x3C) = 1;
    SET_LO8(eax, MEM8(edx + 0x210));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014E87F; /* je: equal / zero */

loc_0014E873:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0014F690(); /* call 0x0014F690 */

loc_0014E87D:
    goto loc_0014E88B;

loc_0014E87F:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    ecx = ebx;
    PUSH32(esp, 0); sub_0014F3E0(); /* call 0x0014F3E0 */

loc_0014E88B:
    eax = MEM32(esi + 0x28);
    if (CMP_NE(MEM8(eax), 2)) goto loc_0014E931; /* jne: not equal / not zero */

loc_0014E897:
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(ecx));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(edx + 0x13F4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    xmm0.f[0] = MEMF(edx + 0xBC); /* movss */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0014E8C2; /* je: equal / zero */

loc_0014E8B8:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0014E8C2; /* je: equal / zero */

loc_0014E8BD:
    if (CMP_NE(LO8(ecx), 2)) goto loc_0014E8D6; /* jne: not equal / not zero */

loc_0014E8C2:
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A2D50); /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_0014E8D6:
    eax = eax << 6;
    ecx = MEM32(eax + ebx + 0x48);
    /* cmp ecx, 0x19 - flags set for next jcc */
    eax = eax + ebx + 0x10;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEM32(eax + 0x34) = 0;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    if (CMP_GE(ecx, 0x19)) goto loc_0014E909; /* jge: greater or equal (signed >=) */

loc_0014E903:
    ecx = ecx + 2;
    MEM32(eax + 0x38) = ecx;

loc_0014E909:
    MEM8(eax + 0x3C) = 1;
    SET_LO8(eax, MEM8(edx + 0x210));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014E925; /* je: equal / zero */

loc_0014E919:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0014F690(); /* call 0x0014F690 */

loc_0014E923:
    goto loc_0014E931;

loc_0014E925:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    ecx = ebx;
    PUSH32(esp, 0); sub_0014F3E0(); /* call 0x0014F3E0 */

loc_0014E931:
    eax = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 3)) goto loc_0014E93E; /* je: equal / zero */

loc_0014E93A:
    if (CMP_NE(LO8(eax), 4)) goto loc_0014E957; /* jne: not equal / not zero */

loc_0014E93E:
    ecx = MEM32(esi + 0x28);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 3)) goto loc_0014E94B; /* je: equal / zero */

loc_0014E947:
    if (CMP_NE(LO8(eax), 4)) goto loc_0014E957; /* jne: not equal / not zero */

loc_0014E94B:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_0014F690(); /* call 0x0014F690 */

loc_0014E957:
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
