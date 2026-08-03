#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00198E60
 * Original: 0x00198E60 - 0x00198F85 (293 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00198E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00198E60:
    SET_LO8(eax, MEM8(edi + 0x18FA));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00198E73; /* je: equal / zero */

loc_00198E6D:
    ebx = edi + 0x13D8;

loc_00198E73:
    SET_LO8(eax, MEM8(edi + 0x15D6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00198F81; /* jne: not equal / not zero */

loc_00198E81:
    eax = MEM32(esi + 0xC8);
    MEM32(edi + 0x15DC) = eax;
    MEM8(edi + 0x15D6) = 1;
    MEM8(edi + 0x15D7) = 1;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x68);
    MEM32(esi + 0x500) = edx;
    edx = MEM32(esi + 0x80);
    ecx++;
    /* test edx, edx - flags set for next jcc */
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x4D4) = edi;
    if (TEST_Z(edx, edx)) goto loc_00198EE5; /* je: equal / zero */

loc_00198EBB:
    PUSH32(esp, ebp);
    eax = 3;
    ebp = edx + 0xC;

loc_00198EC4:
    edx = MEM32(ebp + -4);
    ebp = ebp - 4;
    eax--;
    if (CMP_L(ecx, edx)) goto loc_00198EDB; /* jl: less (signed <) */

loc_00198ECF:
    edx = MEM32(esi + 0x74);
    if (CMP_G(eax, edx)) goto loc_00198EE1; /* jg: greater (signed >) */

loc_00198ED6:
    if (CMP_EQ(edx, 4)) goto loc_00198EE1; /* je: equal / zero */

loc_00198EDB:
    if (TEST_NZ(eax, eax)) goto loc_00198EC4; /* jne: not equal / not zero */

loc_00198EDF:
    goto loc_00198EE4;

loc_00198EE1:
    MEM32(esi + 0x74) = eax;

loc_00198EE4:
    POP32(esp, ebp);

loc_00198EE5:
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x19BC);
    eax = eax + esi;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x4F0));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x4F6));
    eax = esi + 0x124;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001994D0(); /* call 0x001994D0 */

loc_00198F0F:
    ecx = MEM32(0x4D5370);
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x5C), _icall_esp); /* indirect call */
    }

loc_00198F28:
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x19BC);
    eax = ecx + esi + 0x5B9;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_00198F47; /* je: equal / zero */

loc_00198F3B:
    MEM8(eax) = 0;
    MEM8(edi + 0x168F) = 1;
    goto loc_00198F5C;

loc_00198F47:
    edx = MEM32(esi + 0xC8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    MEM8(eax + edi + 0x1689) = 1;

loc_00198F5C:
    if (CMP_NE(MEM32(edi + 0x1920), 1)) goto loc_00198F7D; /* jne: not equal / not zero */

loc_00198F65:
    xmm0.f[0] = MEMF(edi + 0x10DC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1694); /* addss */
    MEMF(edi + 0x240C) = xmm0.f[0]; /* movss */

loc_00198F7D:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00198F81:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
