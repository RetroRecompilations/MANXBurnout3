#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B110
 * Original: 0x0019B110 - 0x0019B1AF (159 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B110:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_BE(edi & edi, 0)) goto loc_0019B130; /* jbe: below or equal (unsigned <=) */

loc_0019B11D:
    PUSH32(esp, esi);
    esi = 0x4AEDDC;
    PUSH32(esp, 0); sub_000113F0(); /* call 0x000113F0 */

loc_0019B128:
    MEM32(ebp + 0xC) = 0;
    POP32(esp, esi);

loc_0019B130:
    MEM8(ebp) = 0;
    MEM32(ebp + 4) = 0;
    eax = MEM32(0x3FA644);
    if (TEST_NZ(eax, eax)) goto loc_0019B150; /* jne: not equal / not zero */

loc_0019B144:
    MEM32(0x3FA5F4) = 2;
    goto loc_0019B167;

loc_0019B150:
    ecx = 2;
    if (CMP_NE(eax, ecx)) goto loc_0019B161; /* jne: not equal / not zero */

loc_0019B159:
    MEM32(0x3FA154) = ecx;
    goto loc_0019B167;

loc_0019B161:
    MEM32(0x3F9E34) = ecx;

loc_0019B167:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x10;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0019B179:
    if (TEST_Z(eax, eax)) goto loc_0019B185; /* je: equal / zero */

loc_0019B17D:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0019B185:
    edi = MEM32(0x4A1E94);
    eax = ebp + 0x14;
    edi = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001AEF80(); /* call 0x001AEF80 */

loc_0019B197:
    if (TEST_Z(eax, eax)) goto loc_0019B1A3; /* je: equal / zero */

loc_0019B19B:
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0019B1A3:
    POP32(esp, edi);
    MEM32(ebp + 8) = 0x18;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
