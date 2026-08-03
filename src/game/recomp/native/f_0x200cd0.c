#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00200CD0
 * Original: 0x00200CD0 - 0x00200D22 (82 bytes, 36 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00200CD0:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    eax = ecx;
    eax = eax >> 1;
    if (CMP_AE(edx, eax)) goto loc_00200CF9; /* jae: above or equal (unsigned >=) */

loc_00200CE7:
    /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 0x20);
    if (TEST_Z(edx, edx)) goto loc_00200D0D; /* je: equal / zero */

loc_00200CF2:
    edx--;
    eax = MEM32(eax);
    if ((edx != 0)) goto loc_00200CF2; /* jne: not equal / not zero */

loc_00200CF7:
    goto loc_00200D0D;

loc_00200CF9:
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x24);
    ecx--;
    if (CMP_EQ(ecx, edx)) goto loc_00200D0D; /* je: equal / zero */

loc_00200D05:
    ecx = ecx - edx;

loc_00200D07:
    ecx--;
    eax = MEM32(eax + 4);
    if ((ecx != 0)) goto loc_00200D07; /* jne: not equal / not zero */

loc_00200D0D:
    ecx = MEM32(eax + 0x2C);
    eax = eax + 0xFFFFFFD4u;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00202240(); /* call 0x00202240 */

loc_00200D1D:
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
