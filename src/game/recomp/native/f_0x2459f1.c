#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002459F1
 * Original: 0x002459F1 - 0x00245A3D (76 bytes, 30 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002459F1(void)
{
    int _flags = 0; /* fallback flag var */

loc_002459F1:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (TEST_Z(MEM8(esi + 0xC), 0x83)) goto loc_00245A34; /* je: equal / zero */

loc_00245A00:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002453B1(); /* call 0x002453B1 */

loc_00245A06:
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0); sub_0024A9BF(); /* call 0x0024A9BF */

loc_00245A0E:
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0024A924(); /* call 0x0024A924 */

loc_00245A16:
    esp = esp + 0xC;
    if (CMP_GE(eax & eax, 0)) goto loc_00245A22; /* jge: greater or equal (signed >=) */

loc_00245A1D:
    edi = edi | 0xFFFFFFFFu;
    goto loc_00245A34;

loc_00245A22:
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_00245A34; /* je: equal / zero */

loc_00245A29:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_00245A2F:
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    POP32(esp, ecx);

loc_00245A34:
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
