#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002263B0
 * Original: 0x002263B0 - 0x00226430 (128 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002263B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002263B0:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    esp = esp - 0x64;
    if (TEST_Z(ecx, ecx)) goto loc_0022642A; /* je: equal / zero */

loc_002263BD:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0022642A; /* je: equal / zero */

loc_002263C4:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    if (CMP_GE(esi, 8)) goto loc_002263D6; /* jge: greater or equal (signed >=) */

loc_002263CE:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_002263D6:
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_002263E2:
    ebx = MEM32(esp + 0x7C);
    ecx = esi + -8;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002263F5:
    PUSH32(esp, 0x10);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_00226406:
    esp = esp + 0x1C;
    edx = 0; /* xor self */
    esi = ebx + esi + -8;
    ecx = 2;
    edi = esp + 0xC;
    /* repe cmpsd - string compare, ecx iterations */
    eax = edx;
    SET_LO8(eax, (1 /* strings matched (repe cmpsb) */) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax--;
    eax = eax & 0xFFFFFFFEu;
    esp = esp + 0x64;
    esp += 4; return; /* ret */

loc_0022642A:
    eax = 0; /* xor self */
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}
