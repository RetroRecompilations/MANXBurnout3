#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00148080
 * Original: 0x00148080 - 0x00148187 (263 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148080:
    esp = esp - 0x50;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    if (TEST_Z(MEM8(ebp + 0x114), 8)) goto loc_00148180; /* je: equal / zero */

loc_00148095:
    xmm0.f[0] = MEMF(ebp + 0xE8); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00148180; /* jnp: not parity */

loc_001480AE:
    if (CMP_GE(MEM32(0x40FC84), 2)) goto loc_00148180; /* jge: greater or equal (signed >=) */

loc_001480BB:
    eax = MEM32(ebp + 0x120);
    eax--;
    if (CMP_A(eax, 4)) goto loc_00148180; /* ja: above (unsigned >) */

loc_001480CB:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x148188); /* switch: 5 entries, 2 targets */
    if (_jt == 0x001480D4u) goto loc_001480D4;
    if (_jt == 0x001480D8u) goto loc_001480D8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001480D4:
    SET_LO8(ebx, 0); /* xor self */
    goto loc_001480DA;

loc_001480D8:
    SET_LO8(ebx, 1);

loc_001480DA:
    esi = 0x40FBB0;
    PUSH32(esp, 0); sub_00146360(); /* call 0x00146360 */

loc_001480E4:
    MEM32(esp + 0xC) = eax;
    eax = 0x40B7F4;
    ebx = esp + 0xC;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_001480FC:
    MEM32(ebp + 0xD4) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0014810C:
    xmm1.f[0] = MEMF(ebp + 0xB0); /* movss */
    xmm0.f[0] = MEMF(0x40FC5C); /* movss */
    eax = MEM32(ebp + 0xD4);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + 0xB4); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + 0xB8); /* movss */
    edi = esp + 0x18;
    esi = 0x40B844;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x5D) = 1;
    MEM8(esp + 0x5C) = 9;
    MEMF(ebp + 0xD8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00148177:
    MEM32(ebp + 0xC8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00148180:
    POP32(esp, ebp);
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

}
