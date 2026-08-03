#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5A60
 * Original: 0x001F5A60 - 0x001F5A9B (59 bytes, 27 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5A60(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5A60:
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi + 8;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_001F5A96; /* jbe: below or equal (unsigned <=) */

loc_001F5A7B:
    goto loc_001F5A80;

    /* nop */

loc_001F5A80:
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001F5A89:
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    esp = esp + 0xC;
    edi++;
    if (CMP_B(edi, eax)) goto loc_001F5A80; /* jb: below (unsigned <) */

loc_001F5A96:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
