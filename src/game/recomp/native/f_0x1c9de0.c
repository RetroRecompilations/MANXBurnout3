#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9DE0
 * Original: 0x001C9DE0 - 0x001C9E4C (108 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C9DE0:
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x3A8));
    if (CMP_LE(eax & eax, 0)) goto loc_001C9DF8; /* jle: less or equal (signed <=) */

loc_001C9DEE:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esi + 0x3A8) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001C9DF8:
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x39C);
    PUSH32(esp, 0); sub_001C98A0(); /* call 0x001C98A0 */

loc_001C9E04:
    ecx = ebx;
    PUSH32(esp, 0); sub_001C9ED0(); /* call 0x001C9ED0 */

loc_001C9E0B:
    ecx = MEM32(esi + -8);
    /* test ecx, ecx - flags set for next jcc */
    eax = esi + -8;
    POP32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001C9E1C; /* je: equal / zero */

loc_001C9E16:
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;

loc_001C9E1C:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_001C9E30; /* je: equal / zero */

loc_001C9E23:
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = 0;
    goto loc_001C9E35;

loc_001C9E30:
    ecx = MEM32(eax);
    MEM32(ebx + 0x34) = ecx;

loc_001C9E35:
    ecx = MEM32(ebx + 0x30);
    ecx = MEM32(ecx + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_001C9E44; /* je: equal / zero */

loc_001C9E41:
    MEM32(ecx + 4) = eax;

loc_001C9E44:
    edx = MEM32(ebx + 0x30);
    MEM32(edx + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
