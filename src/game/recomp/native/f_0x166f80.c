#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00166F80
 * Original: 0x00166F80 - 0x00167032 (178 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F80(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00166F80:
    eax = MEM32(ebx + 8);
    if (CMP_NE(eax, 3)) goto loc_00166FBF; /* jne: not equal / not zero */

loc_00166F88:
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    eax = MEM32(esi + 0xC20);
    eax = eax & 0x2000;
    ecx = 0; /* xor self */
    eax = eax | ecx;
    if ((eax == 0)) goto loc_00166FA9; /* je: equal / zero */

loc_00166F9D:
    PUSH32(esp, edi);
    edi = 0xD;
    PUSH32(esp, 0); sub_00167C90(); /* call 0x00167C90 */

loc_00166FA8:
    POP32(esp, edi);

loc_00166FA9:
    eax = MEM32(ebx + 0x10);
    MEM8(eax + 0xC19) = 1;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0); sub_00167CE0(); /* call 0x00167CE0 */

loc_00166FBD:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00166FBF:
    SET_LO8(ecx, MEM8(ebx + 0xC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0016701F; /* je: equal / zero */

loc_00166FC6:
    if (TEST_NZ(eax, eax)) goto loc_00166FD9; /* jne: not equal / not zero */

loc_00166FCA:
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 0); sub_00167E10(); /* call 0x00167E10 */

loc_00166FD2:
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    goto loc_00166FE5;

loc_00166FD9:
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0xC28);
    MEM32(ebx + 0x14) = edx;

loc_00166FE5:
    eax = MEM32(ebx + 4);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00167016; /* jle: less or equal (signed <=) */

loc_00166FEE:
    eax = MEM32(ebx);

loc_00166FF0:
    edx = MEM32(eax + 0x14);
    edx = edx & 0x80000000u;
    if (CMP_NE(edx, 0x80000000u)) goto loc_00167016; /* jne: not equal / not zero */

loc_00167001:
    xmm0.f[0] = MEMF(eax); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(ebx + 0x14))) goto loc_00167016; /* jae: above or equal (unsigned >=) */

loc_0016700B:
    edx = MEM32(ebx + 4);
    ecx++;
    eax = eax + 0x20;
    if (CMP_L(ecx, edx)) goto loc_00166FF0; /* jl: less (signed <) */

loc_00167016:
    ecx--;
    MEM32(ebx + 0x18) = ecx;
    MEM8(ebx + 0x1C) = 1;
    esp += 4; return; /* ret */

loc_0016701F:
    eax = MEM32(ebx);
    MEM32(ebx + 0x18) = 0xFFFFFFFFu;
    ecx = MEM32(eax);
    MEM32(ebx + 0x14) = ecx;
    MEM8(ebx + 0x1C) = 1;
    esp += 4; return; /* ret */

}
