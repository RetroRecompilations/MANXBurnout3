#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001803C0
 * Original: 0x001803C0 - 0x0018051E (350 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001803C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001803C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    SET_LO8(eax, MEM8(esi + 0x210));
    ecx = MEM32(esi + 0xCC4);
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(esi + 0xCC0);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    eax = eax + 0x5C;
    ecx = esp + 0x18;
    MEM32(esp + 8) = ebx;
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_001803FA:
    if (CMP_NE(MEM8(esi + 0x215), 1)) goto loc_00180415; /* jne: not equal / not zero */

loc_00180403:
    edx = MEM32(esi + 0x1580);
    SET_LO8(eax, MEM8(edx + 0x27D0));
    MEM8(esp + 0xC) = LO8(eax);
    goto loc_0018041A;

loc_00180415:
    MEM8(esp + 0xC) = 0xFF;

loc_0018041A:
    ecx = MEM32(ebp + 8);
    edi = MEM32(ecx + 0x64584);
    eax = MEM32(esi + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x19AB));
    edi = edi & 1;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00180474; /* je: equal / zero */

loc_00180436:
    eax = eax + 0x1930;
    PUSH32(esp, eax);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = esi + 0x70;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00180449:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM32(esp + 8) = eax;

loc_00180474:
    SET_LO8(eax, MEM8(esi + 0x1169));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001804BD; /* jle: less or equal (signed <=) */

loc_0018047E:
    edi = edi;

loc_00180480:
    ecx = MEM32(esp + 0x14);
    eax = ebx;
    eax = eax ^ edi;
    if (CMP_EQ(MEM8(ecx + eax + 0x4AC), 3)) goto loc_001804B1; /* je: equal / zero */

loc_00180492:
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001807C0(); /* call 0x001807C0 */

loc_001804B1:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_00180480; /* jl: less (signed <) */

loc_001804BD:
    SET_LO8(eax, MEM8(esp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001804D6; /* je: equal / zero */

loc_001804C5:
    ebx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    edi = esp + 0x1C;
    eax = esi;
    PUSH32(esp, 0); sub_00181900(); /* call 0x00181900 */

loc_001804D4:
    goto loc_001804ED;

loc_001804D6:
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x13F4);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00180EE0(); /* call 0x00180EE0 */

loc_001804EA:
    ebx = MEM32(ebp + 8);

loc_001804ED:
    eax = MEM32(esi + 0x13F4);
    xmm0.f[0] = MEMF(eax + 0x16C4); /* movss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00180516; /* jbe: below or equal (unsigned <=) */

loc_00180508:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0017FB10(); /* call 0x0017FB10 */

loc_0018050F:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0017FFF0(); /* call 0x0017FFF0 */

loc_00180516:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
