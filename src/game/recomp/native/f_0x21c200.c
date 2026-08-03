#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C200
 * Original: 0x0021C200 - 0x0021C22F (47 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C200:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x18);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0021C223; /* jle: less or equal (signed <=) */

loc_0021C20E:
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_0021C216:
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_0021C222; /* je: equal / zero */

loc_0021C21A:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edx)) goto loc_0021C216; /* jl: less (signed <) */

loc_0021C222:
    POP32(esp, edi);

loc_0021C223:
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021C190(); /* call 0x0021C190 */

loc_0021C22A:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
