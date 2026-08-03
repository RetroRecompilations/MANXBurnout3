#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213230
 * Original: 0x00213230 - 0x00213274 (68 bytes, 35 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213230:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0x80 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ebx;
    if (CMP_B(LO8(eax), 0x80)) goto loc_0021326C; /* jb: below (unsigned <) */

loc_00213245:
    if (CMP_LE(ebp & ebp, 0)) goto loc_0021326C; /* jle: less or equal (signed <=) */

loc_00213249:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    eax = eax & 0x7F;
    eax = eax << LO8(ecx);
    ecx = ecx + 7;
    edx = edx | eax;
    esi++;
    if (CMP_L(ecx, 8)) goto loc_00213267; /* jl: less (signed <) */

loc_0021325D:
    MEM8(edi) = LO8(edx);
    edi++;
    edx = edx >> 8;
    ecx = ecx - 8;
    ebp--;

loc_00213267:
    if (CMP_AE(MEM8(esi), 0x80)) goto loc_00213245; /* jae: above or equal (unsigned >=) */

loc_0021326C:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax - ebx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
