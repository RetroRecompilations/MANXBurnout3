#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00213AB0
 * Original: 0x00213AB0 - 0x00213B6C (188 bytes, 66 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213AB0:
    eax = 0x2100;
    PUSH32(esp, 0); sub_00244C10(); /* call 0x00244C10 */

loc_00213ABA:
    edx = MEM32(esp + 0x210C);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2108);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x211C);
    eax = esp + 0xC;
    if (TEST_NZ(edx, edx)) goto loc_00213AE0; /* jne: not equal / not zero */

loc_00213ADA:
    MEM8(ebp) = 0;
    goto loc_00213AFF;

loc_00213AE0:
    SET_LO8(ecx, MEM8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00213AFB; /* je: equal / zero */

loc_00213AE6:
    esi = esp + 0xC;
    edx = edx - esi;
    /* nop */

loc_00213AF0:
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(edx + eax + 1));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00213AF0; /* jne: not equal / not zero */

loc_00213AFB:
    MEM8(eax) = 0x3D;
    eax++;

loc_00213AFF:
    esi = MEM32(esp + 0x2120);
    MEM8(eax) = 0x24;
    eax++;
    ecx = esp + 0x210C;
    ecx = ecx - eax;
    edx = esi + esi + 1;
    if (CMP_BE(edx, ecx)) goto loc_00213B28; /* jbe: below or equal (unsigned <=) */

loc_00213B1B:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 0x2100;
    esp += 4; return; /* ret */

loc_00213B28:
    if (CMP_LE(esi & esi, 0)) goto loc_00213B49; /* jle: less or equal (signed <=) */

loc_00213B2C:
    /* nop */

loc_00213B30:
    ecx = ZX8(MEM8(edi));
    SET_LO8(edx, MEM8(ecx + 0x36F850));
    SET_LO8(ecx, MEM8(ecx + 0x36F950));
    MEM8(eax) = LO8(edx);
    eax++;
    MEM8(eax) = LO8(ecx);
    eax++;
    edi++;
    esi--;
    if ((esi != 0)) goto loc_00213B30; /* jne: not equal / not zero */

loc_00213B49:
    edx = esp + 0xC;
    MEM8(eax) = 0;
    eax = MEM32(esp + 0x2114);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00213280(); /* call 0x00213280 */

loc_00213B5F:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x2100;
    esp += 4; return; /* ret */

}
