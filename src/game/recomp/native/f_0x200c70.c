#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00200C70
 * Original: 0x00200C70 - 0x00200CC1 (81 bytes, 32 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00200C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00200C70:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax + 8), 5)) goto loc_00200C7D; /* je: equal / zero */

loc_00200C7A:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00200C7D:
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 4);
    if (CMP_BE(ecx & 0xFFFFFFFEu, 0)) goto loc_00200CA2; /* jbe: below or equal (unsigned <=) */

loc_00200C8C:
    eax = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x2C);
    eax = eax + 0xFFFFFFD4u;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00202270(); /* call 0x00202270 */

loc_00200C9E:
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00200CA2:
    ecx--;
    eax = MEM32(eax + 0x24);
    if ((ecx == 0)) goto loc_00200CAE; /* je: equal / zero */

loc_00200CA8:
    ecx--;
    eax = MEM32(eax + 4);
    if ((ecx != 0)) goto loc_00200CA8; /* jne: not equal / not zero */

loc_00200CAE:
    edx = MEM32(eax + 0x2C);
    eax = eax + 0xFFFFFFD4u;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00202270(); /* call 0x00202270 */

loc_00200CBD:
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
