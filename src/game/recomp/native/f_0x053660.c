#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053660
 * Original: 0x00053660 - 0x000536B7 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053660:
    eax = MEM32(ebx + 0x170);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(eax, ebp)) goto loc_0005369E; /* jle: less or equal (signed <=) */

loc_00053670:
    PUSH32(esp, edi);
    edi = ebx;

loc_00053673:
    PUSH32(esp, 0); sub_00053B70(); /* call 0x00053B70 */

loc_00053678:
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, ebp)) goto loc_0005368C; /* je: equal / zero */

loc_0005367F:
    /* nop */

loc_00053680:
    ecx = MEM32(eax + 0xC);
    /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0xC) = ebp;
    eax = ecx;
    if (CMP_NE(ecx, ebp)) goto loc_00053680; /* jne: not equal / not zero */

loc_0005368C:
    MEM32(edi + 0x68) = ebp;
    eax = MEM32(ebx + 0x170);
    esi++;
    edi = edi + 0x70;
    if (CMP_L(esi, eax)) goto loc_00053673; /* jl: less (signed <) */

loc_0005369D:
    POP32(esp, edi);

loc_0005369E:
    POP32(esp, esi);
    MEM32(ebx + 0x170) = ebp;
    MEM32(ebx + 0x174) = ebp;
    MEM32(ebx + 0x178) = 0x18;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
