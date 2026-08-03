#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024E2D5
 * Original: 0x0024E2D5 - 0x0024E308 (51 bytes, 22 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E2D5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024E2D5:
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = edx + 0x78;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax--;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0024E301; /* jne: not equal / not zero */

loc_0024E2F4:
    if (TEST_Z(edx, edx)) goto loc_0024E301; /* je: equal / zero */

loc_0024E2F8:
    PUSH32(esp, 1);
    ecx = edx;
    PUSH32(esp, 0); sub_0024E13C(); /* call 0x0024E13C */

loc_0024E301:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
