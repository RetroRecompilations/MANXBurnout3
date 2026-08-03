#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DB090
 * Original: 0x001DB090 - 0x001DB14F (191 bytes, 60 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB090(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB090:
    esp = esp - 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7593D4);
    PUSH32(esp, 0x7592B0);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_001DB0A4:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001DB0CD; /* jne: not equal / not zero */

loc_001DB0AB:
    PUSH32(esp, 4);
    PUSH32(esp, 0x18);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DB0BC:
    MEM32(esp + 0xC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DB0CA:
    esp = esp + 0xC;

loc_001DB0CD:
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_001DB0DB:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001DB109; /* jne: not equal / not zero */

loc_001DB0E2:
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DB0F2:
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DB100:
    esp = esp + 0xC;
    eax = 0; /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DB109:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7592E8);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_001DB117:
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_001DB140; /* jne: not equal / not zero */

loc_001DB11E:
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x18);
    MEM32(esp + 8) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DB12F:
    MEM32(esp + 0xC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DB13D:
    esp = esp + 0xC;

loc_001DB140:
    MEM32(0x41AACC) = MEM32(0x41AACC) + 1;
    eax = 1;
    esp = esp + 8;
    esp += 4; return; /* ret */

}
