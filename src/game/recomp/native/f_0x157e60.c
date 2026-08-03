#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157E60
 * Original: 0x00157E60 - 0x00157ECD (109 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157E60:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    edi = edi;

loc_00157E70:
    edx = MEM32(eax * 8 + 0x39DF3C);
    /* test edx, edx - flags set for next jcc */
    ecx = MEM32(eax * 8 + 0x39DF38);
    if (CMP_A(edx & edx, 0)) goto loc_00157EB7; /* ja: above (unsigned >) */

loc_00157E82:
    if (CMP_B(edx & edx, 0)) goto loc_00157E89; /* jb: below (unsigned <) */

loc_00157E84:
    if (CMP_AE(ecx, 7)) goto loc_00157EB7; /* jae: above or equal (unsigned >=) */

loc_00157E89:
    esi = MEM32(ecx * 4 + 0x39E778);
    edx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00157EBF; /* jle: less or equal (signed <=) */

loc_00157E96:
    ecx = MEM32(ecx * 4 + 0x3ED0F8);
    /* nop */

loc_00157EA0:
    ebp = MEM32(ecx);
    if (CMP_NE(ebp, ebx)) goto loc_00157EAD; /* jne: not equal / not zero */

loc_00157EA6:
    ebp = MEM32(ecx + 4);
    if (CMP_EQ(ebp, edi)) goto loc_00157EC8; /* je: equal / zero */

loc_00157EAD:
    edx++;
    ecx = ecx + 8;
    if (CMP_L(edx, esi)) goto loc_00157EA0; /* jl: less (signed <) */

loc_00157EB5:
    goto loc_00157EBF;

loc_00157EB7:
    if (CMP_NE(ecx, ebx)) goto loc_00157EBF; /* jne: not equal / not zero */

loc_00157EBB:
    if (CMP_EQ(edx, edi)) goto loc_00157EC8; /* je: equal / zero */

loc_00157EBF:
    eax++;
    if (CMP_L(eax, 0x49)) goto loc_00157E70; /* jl: less (signed <) */

loc_00157EC5:
    eax = eax | 0xFFFFFFFFu;

loc_00157EC8:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
