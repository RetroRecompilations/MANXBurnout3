#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DACF0
 * Original: 0x001DACF0 - 0x001DADB3 (195 bytes, 60 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DACF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DACF0:
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7592B4), _icall_esp); /* indirect call */
    }

loc_001DAD01:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001DAD30; /* jne: not equal / not zero */

loc_001DAD08:
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DAD19:
    MEM32(esp + 0xC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DAD27:
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DAD30:
    PUSH32(esp, 0x7592A0);
    PUSH32(esp, 0x3C0830);
    PUSH32(esp, 0); sub_001E1AF0(); /* call 0x001E1AF0 */

loc_001DAD3F:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001DAD76; /* je: equal / zero */

loc_001DAD46:
    ecx = MEM32(0x7592B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DFA20(); /* call 0x001DFA20 */

loc_001DAD52:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7592B4), _icall_esp); /* indirect call */
    }

loc_001DAD60:
    esp = esp + 0x14;
    MEM32(0x7593F0) = 3;
    eax = 1;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DAD76:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7592B4), _icall_esp); /* indirect call */
    }

loc_001DAD84:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001DADAD; /* jne: not equal / not zero */

loc_001DAD8B:
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DAD9C:
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DADAA:
    esp = esp + 0xC;

loc_001DADAD:
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}
