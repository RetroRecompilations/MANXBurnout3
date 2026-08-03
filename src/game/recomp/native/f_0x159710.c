#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00159710
 * Original: 0x00159710 - 0x0015974F (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159710:
    ecx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 8);
    ecx = ecx + edi;
    ebp = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00159744; /* jle: less or equal (signed <=) */

loc_00159725:
    PUSH32(esp, ebx);
    goto loc_00159730;

    /* nop */
    /* nop */

loc_00159730:
    eax = MEM32(esi + 4);
    ebx = eax + ebp * 8;
    PUSH32(esp, 0); sub_001596B0(); /* call 0x001596B0 */

loc_0015973B:
    eax = MEM32(esi + 8);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00159730; /* jl: less (signed <) */

loc_00159743:
    POP32(esp, ebx);

loc_00159744:
    eax = MEM32(esi + 0xC);
    eax = eax + edi;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
