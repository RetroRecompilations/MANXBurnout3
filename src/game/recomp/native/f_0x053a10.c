#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053A10
 * Original: 0x00053A10 - 0x00053A9A (138 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053A10:
    esp = esp - 8;
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    edx = MEM32(ecx * 4 + 0x388F78);
    PUSH32(esp, ebp);
    ebp = MEM32(eax * 4 + 0x388F78);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x68);
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(esi, esi)) goto loc_00053A92; /* je: equal / zero */

loc_00053A34:
    PUSH32(esp, ebx);

loc_00053A35:
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esp + 0x10);
    ecx = eax;
    ecx = ecx & ebp;
    SET_LO8(edx, ((ecx != 0)) ? 1 : 0); /* setne */
    eax = eax & ebx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = 0; /* xor self */
    eax = (uint32_t)(-(int32_t)eax);
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    MEM8(esp + 0xC) = LO8(edx);
    if (CMP_NE(ebx, eax)) goto loc_00053A71; /* jne: not equal / not zero */

loc_00053A5A:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00053A8A; /* je: equal / zero */

loc_00053A5E:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B168C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00053A8A; /* jp: parity */

loc_00053A71:
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_00053A8A:
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_00053A35; /* jne: not equal / not zero */

loc_00053A91:
    POP32(esp, ebx);

loc_00053A92:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
