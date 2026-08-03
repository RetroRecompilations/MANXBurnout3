#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020B4B0
 * Original: 0x0020B4B0 - 0x0020B545 (149 bytes, 43 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B4B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020B4B0:
    if (TEST_Z(eax, eax)) goto loc_0020B4E0; /* je: equal / zero */

loc_0020B4B4:
    ecx = MEM32(esi);
    ecx = ecx | 0x20;
    eax = ecx;
    /* test eax, 0x1000000 - flags set for next jcc */
    MEM32(esi) = ecx;
    if (TEST_NZ(eax, 0x1000000)) goto loc_0020B4E3; /* jne: not equal / not zero */

loc_0020B4C4:
    eax = MEM32(esi + 0x94);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x36EAB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F60AC(); /* call 0x002F60AC */

loc_0020B4D9:
    if (CMP_GE(eax & eax, 0)) goto loc_0020B4E3; /* jge: greater or equal (signed >=) */

loc_0020B4DD:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0020B4E0:
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;

loc_0020B4E3:
    ecx = MEM32(esi + 0x128);
    eax = 0; /* xor self */
    if (CMP_BE(ecx & ecx, 0)) goto loc_0020B508; /* jbe: below or equal (unsigned <=) */

loc_0020B4EF:
    ecx = esi + 0x12C;

loc_0020B4F5:
    if (CMP_EQ(MEM32(ecx), 0xA)) goto loc_0020B53C; /* je: equal / zero */

loc_0020B4FA:
    edx = MEM32(esi + 0x128);
    eax++;
    ecx = ecx + 8;
    if (CMP_B(eax, edx)) goto loc_0020B4F5; /* jb: below (unsigned <) */

loc_0020B508:
    eax = MEM32(esi);
    eax = eax & 0xFFDFFFFFu;

loc_0020B50F:
    MEM32(esi) = eax;
    MEM32(esi + 0x80) = 0;
    MEM32(esi + 0x84) = 0;
    MEM32(esi + 0x88) = 0;
    MEM32(esi + 0x34) = 0x3F800000;
    eax = 1;
    esp += 4; return; /* ret */

loc_0020B53C:
    eax = MEM32(esi);
    eax = eax | 0x200000;
    goto loc_0020B50F;

}
