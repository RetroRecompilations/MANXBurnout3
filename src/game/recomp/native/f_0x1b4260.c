#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4260
 * Original: 0x001B4260 - 0x001B42AA (74 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4260:
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi | edx;
    PUSH32(esp, edi);
    if ((esi == 0)) goto loc_001B4297; /* je: equal / zero */

loc_001B4271:
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    /* nop */

loc_001B4280:
    if (CMP_NE(ecx, edi)) goto loc_001B4288; /* jne: not equal / not zero */

loc_001B4284:
    if (CMP_EQ(edx, esi)) goto loc_001B429F; /* je: equal / zero */

loc_001B4288:
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    eax = eax + 0x10;
    ebp = ecx;
    ebp = ebp | edx;
    if ((ebp != 0)) goto loc_001B4280; /* jne: not equal / not zero */

loc_001B4297:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001B429F:
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax + ebx;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
