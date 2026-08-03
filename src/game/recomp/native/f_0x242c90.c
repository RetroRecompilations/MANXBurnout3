#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242C90
 * Original: 0x00242C90 - 0x00242D04 (116 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00242C90:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(eax, edi)) goto loc_00242D01; /* je: equal / zero */

loc_00242CA1:
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00242CFD; /* jle: less or equal (signed <=) */

loc_00242CAB:
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    edi = edi;

loc_00242CB0:
    eax = MEM32(esi + 0x1C);
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    eax = eax ^ edi;
    if (TEST_Z(edx, eax)) goto loc_00242CEE; /* je: equal / zero */

loc_00242CC2:
    eax = MEM32(esi + 0x14);
    eax = eax + ebp;
    /* test edi, edx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(edi, edx)) ? 1 : 0); /* setne */
    if (CMP_NE(MEM32(eax + 0x20), 0)) goto loc_00242CDC; /* jne: not equal / not zero */

loc_00242CD2:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00242CDC; /* je: equal / zero */

loc_00242CD6:
    edx = ~edx;
    edi = edi & edx;
    goto loc_00242CEE;

loc_00242CDC:
    edx = MEM32(esi + 0xC);
    ecx = ZX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 8), _icall_esp); /* indirect call */
    }

loc_00242CEB:
    esp = esp + 0xC;

loc_00242CEE:
    eax = MEM32(esi + 0x10);
    ebx++;
    ebp = ebp + 0x8C;
    if (CMP_L(ebx, eax)) goto loc_00242CB0; /* jl: less (signed <) */

loc_00242CFC:
    POP32(esp, ebp);

loc_00242CFD:
    MEM32(esi + 0x1C) = edi;
    POP32(esp, ebx);

loc_00242D01:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
