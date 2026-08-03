#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E640
 * Original: 0x0019E640 - 0x0019E6D0 (144 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019E640:
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(ebp) = 0xFFFFFFFFu;
    SET_LO8(edx, MEM8(ecx + 0x48));
    eax = eax | 0xFFFFFFFFu;
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebx = 0x3E80;
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_0019E6B1; /* jbe: below or equal (unsigned <=) */

loc_0019E660:
    edx = 0xFFFFFFFAu;
    PUSH32(esp, esi);
    edx = edx - ecx;
    PUSH32(esp, edi);
    edi = ecx + 6;
    MEM32(esp + 0x1C) = edx;

loc_0019E670:
    esi = ZX8(MEM8(edi));
    edx = ZX8(MEM8(edi + 0x18));
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x118);
    ecx = MEM32(ecx + 0x613824);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + edx * 4);
    if (CMP_LE(ecx, MEM32(esp + 0x18))) goto loc_0019E69C; /* jle: less or equal (signed <=) */

loc_0019E691:
    if (CMP_GE(ecx, ebx)) goto loc_0019E69C; /* jge: greater or equal (signed >=) */

loc_0019E695:
    eax = esi;
    ebx = ecx;
    MEM32(ebp) = edx;

loc_0019E69C:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(ecx + 0x48));
    edi++;
    edx = edx + edi;
    if (CMP_L(edx, ecx)) goto loc_0019E670; /* jl: less (signed <) */

loc_0019E6AF:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019E6B1:
    /* test eax, eax - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(edx) = ebx;
    POP32(esp, ebx);
    if (CMP_GE(eax & eax, 0)) goto loc_0019E6C2; /* jge: greater or equal (signed >=) */

loc_0019E6BD:
    eax = 0; /* xor self */
    esp += 20; return; /* ret 16 */

loc_0019E6C2:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x118);
    eax = eax + 0x6137E4;
    esp += 20; return; /* ret 16 */

}
