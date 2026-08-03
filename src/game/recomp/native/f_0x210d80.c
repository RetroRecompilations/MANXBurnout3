#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210D80
 * Original: 0x00210D80 - 0x00210DDC (92 bytes, 30 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210D80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00210D80:
    esp = esp - 0x9C;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0031ABF3(); /* call 0x0031ABF3 */

loc_00210D93:
    if (TEST_NZ(eax, eax)) goto loc_00210DCD; /* jne: not equal / not zero */

loc_00210D97:
    eax = MEM32(esp + 0xA4);
    if (TEST_Z(eax, eax)) goto loc_00210DC0; /* je: equal / zero */

loc_00210DA2:
    if (CMP_B(MEM32(esp + 0xA8), 1)) goto loc_00210DC0; /* jb: below (unsigned <) */

loc_00210DAC:
    ecx = ZX8(MEM8(esp + 0x38));
    PUSH32(esp, ecx);
    edx = esp + 0x3D;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_00210DBD:
    esp = esp + 0xC;

loc_00210DC0:
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

loc_00210DCD:
    if (CMP_NE(eax, 1)) goto loc_00210DD4; /* jne: not equal / not zero */

loc_00210DD2:
    eax = esi;

loc_00210DD4:
    POP32(esp, esi);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}
