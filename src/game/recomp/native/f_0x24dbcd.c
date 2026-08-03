#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DBCD
 * Original: 0x0024DBCD - 0x0024DC3A (109 bytes, 46 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DBCD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024DBCD:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    /* cmp MEM32(ecx), edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_NE(MEM32(ecx), edx)) goto loc_0024DBE4; /* jne: not equal / not zero */

loc_0024DBDD:
    eax = 0x80004005u;
    goto loc_0024DC36;

loc_0024DBE4:
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    if (CMP_NE(MEM32(ecx + 0x3C), ebx)) goto loc_0024DBF4; /* jne: not equal / not zero */

loc_0024DBED:
    eax = 0x80004005u;
    goto loc_0024DC35;

loc_0024DBF4:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx + edi * 4 + 0x28;
    if (CMP_EQ(MEM32(esi), edx)) goto loc_0024DC08; /* je: equal / zero */

loc_0024DC01:
    eax = 0x80004005u;
    goto loc_0024DC33;

loc_0024DC08:
    if (CMP_BE(ebx, edx)) goto loc_0024DC1D; /* jbe: below or equal (unsigned <=) */

loc_0024DC0C:
    ebx = MEM32(ecx + 0x38);

loc_0024DC0F:
    if (CMP_EQ(MEM32(ebx), 0xFFFFFFFFu)) goto loc_0024DC1D; /* je: equal / zero */

loc_0024DC14:
    edx++;
    ebx = ebx + 0x7C;
    if (CMP_B(edx, MEM32(ecx + 8))) goto loc_0024DC0F; /* jb: below (unsigned <) */

loc_0024DC1D:
    eax = MEM32(ecx + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7C);
    MEM32(edx + eax) = edi;
    eax = MEM32(ecx + 0x38);
    eax = eax + edx;
    MEM32(esi) = eax;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) + 1;
    eax = MEM32(ebp + -4);

loc_0024DC33:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0024DC35:
    POP32(esp, ebx);

loc_0024DC36:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
