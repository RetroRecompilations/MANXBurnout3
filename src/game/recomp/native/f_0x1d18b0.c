#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D18B0
 * Original: 0x001D18B0 - 0x001D191E (110 bytes, 37 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D18B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D18B0:
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_001D18BF; /* jne: not equal / not zero */

loc_001D18BA:
    eax = MEM32(0x10130);

loc_001D18BF:
    ecx = MEM32(ebp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D1818);
    PUSH32(esp, 0);
    ecx = ecx >> 2;
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(0x754DA8));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B89C), _icall_esp); /* indirect call */
    }

loc_001D18EF:
    ecx = eax;
    if (CMP_GE(ecx & ecx, 0)) goto loc_001D1917; /* jge: greater or equal (signed >=) */

loc_001D18F5:
    eax = ZX8(MEM8(0x24));
    if (CMP_AE(LO8(eax), 2)) goto loc_001D1917; /* jae: above or equal (unsigned >=) */

loc_001D1901:
    eax = MEM32(0x28);
    if (CMP_EQ(MEM32(eax + 0x28), 0)) goto loc_001D1917; /* je: equal / zero */

loc_001D190D:
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D1981(); /* call 0x001D1981 */

loc_001D1913:
    eax = 0; /* xor self */
    goto loc_001D191A;

loc_001D1917:
    eax = MEM32(ebp + 0xC);

loc_001D191A:
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}
