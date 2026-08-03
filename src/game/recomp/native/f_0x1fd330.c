#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FD330
 * Original: 0x001FD330 - 0x001FD368 (56 bytes, 21 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FD330(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FD330:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    if (CMP_BE(ecx & ecx, 0)) goto loc_001FD342; /* jbe: below or equal (unsigned <=) */

loc_001FD33B:
    ecx--;
    MEM32(eax + 0xC) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001FD342:
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(MEM8(eax + 0x10), 1)) goto loc_001FD362; /* jne: not equal / not zero */

loc_001FD359:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FD35F:
    esp = esp + 4;

loc_001FD362:
    eax = 1;
    esp += 4; return; /* ret */

}
