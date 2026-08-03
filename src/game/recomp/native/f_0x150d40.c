#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150D40
 * Original: 0x00150D40 - 0x00150E73 (307 bytes, 76 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00150D40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = eax;
    /* cmp MEM32(0x73A1C0), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(MEM32(0x73A1C0), 1)) goto loc_00150E6D; /* jg: greater (signed >) */

loc_00150D5A:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00150D64:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00150D7B; /* je: equal / zero */

loc_00150D68:
    PUSH32(esp, 0x3F5DB3D7);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = ebx;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_00150D77:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    goto loc_00150D97;

loc_00150D7B:
    eax = MEM32(0x4CFB24);
    if (TEST_Z(eax, eax)) goto loc_00150D9D; /* je: equal / zero */

loc_00150D84:
    ecx = MEM32(eax + 8);
    /* cmp ecx, 0x878337FFu - flags set for next jcc */
    eax = MEM32(eax + 0xC);
    if (CMP_NE(ecx, 0x878337FFu)) goto loc_00150D9D; /* jne: not equal / not zero */

loc_00150D92:
    /* cmp eax, 0xBA38E7C8u - flags set for next jcc */

loc_00150D97:
    if (CMP_EQ(eax, 0xBA38E7C8u)) goto loc_00150E6D; /* je: equal / zero */

loc_00150D9D:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x280), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00150DB8:
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00150E6D; /* jbe: below or equal (unsigned <=) */

loc_00150DC9:
    edi = MEM32(ebx + 0x884);
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x3F35C28F);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001CBCA0(); /* call 0x001CBCA0 */

loc_00150DE8:
    esi = MEM32(ebx + 0x884);
    eax = MEM32(esi + 0x170);
    edi = 6;
    if (CMP_EQ(eax, edi)) goto loc_00150E27; /* je: equal / zero */

loc_00150DFD:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F9310(); /* call 0x001F9310 */

loc_00150E0B:
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_00150E19:
    esp = esp + 0x10;
    MEM32(esi + 0x170) = edi;
    PUSH32(esp, 0); sub_001CBA60(); /* call 0x001CBA60 */

loc_00150E27:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    MEM8(esi + 0x195) = 0;
    edx = MEM32(ebx + 0x884);
    MEM8(edx + 0x18C) = 3;
    eax = MEM32(ebx + 0x884);
    MEM8(eax + 0x18D) = MEM8(eax + 0x18D) | 0x10;
    MEM8(ebx + 0x8DD) = 0;
    MEM8(ebx + 0x8E0) = 1;
    MEM8(ebx + 0x8DC) = 1;
    MEMF(ebx + 0x8A4) = xmm0.f[0]; /* movss */

loc_00150E6D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
