#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053B70
 * Original: 0x00053B70 - 0x00053BD9 (105 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00053B70:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    eax = 0; /* xor self */

loc_00053B76:
    ecx = MEM32(edi + 0x40);
    MEM32(ecx + eax + 0xC) = ebx;
    eax = eax + 0x10;
    if (CMP_L(eax, 0x120)) goto loc_00053B76; /* jl: less (signed <) */

loc_00053B87:
    esi = MEM32(edi + 0x64);
    if (CMP_EQ(esi, ebx)) goto loc_00053BD6; /* je: equal / zero */

loc_00053B8E:
    ecx = esi;
    PUSH32(esp, 0); sub_001C1740(); /* call 0x001C1740 */

loc_00053B95:
    ecx = MEM32(esi + 0x48);
    edx = MEM32(esi + -8);
    eax = esi + -8;
    ecx = ecx + 0x40;
    if (CMP_EQ(edx, ebx)) goto loc_00053BAB; /* je: equal / zero */

loc_00053BA5:
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;

loc_00053BAB:
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_00053BBB; /* je: equal / zero */

loc_00053BB2:
    esi = MEM32(eax);
    MEM32(edx) = esi;
    MEM32(eax + 4) = ebx;
    goto loc_00053BC0;

loc_00053BBB:
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;

loc_00053BC0:
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    /* cmp edx, ebx - flags set for next jcc */
    MEM32(eax) = edx;
    if (CMP_EQ(edx, ebx)) goto loc_00053BCE; /* je: equal / zero */

loc_00053BCB:
    MEM32(edx + 4) = eax;

loc_00053BCE:
    ecx = MEM32(ecx);
    MEM32(ecx + 0x10) = eax;
    MEM32(edi + 0x64) = ebx;

loc_00053BD6:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
