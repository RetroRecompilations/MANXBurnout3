#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044D70
 * Original: 0x00044D70 - 0x00044E0A (154 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00044D70:
    eax = MEM32(ebx + 0x8B0C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00044E08; /* jle: less or equal (signed <=) */

loc_00044D81:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 0x8A8C;
    ebp = esi;
    goto loc_00044D90;

    /* nop */

loc_00044D90:
    eax = MEM32(ebp);
    PUSH32(esp, 0); sub_00045050(); /* call 0x00045050 */

loc_00044D98:
    if (CMP_NE(eax, 1)) goto loc_00044DF8; /* jne: not equal / not zero */

loc_00044D9D:
    ecx = MEM32(ebp);
    MEM32(ecx + 8) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x80);
    edx = eax + -1;
    if (CMP_NE(edi, edx)) goto loc_00044DBD; /* jne: not equal / not zero */

loc_00044DB4:
    MEM32(esi + edi * 4) = 0;
    goto loc_00044DD2;

loc_00044DBD:
    eax = MEM32(esi + eax * 4 + -4);
    MEM32(esi + edi * 4) = eax;
    edx = MEM32(esi + 0x80);
    MEM32(esi + edx * 4 + -4) = 0;

loc_00044DD2:
    MEM32(esi + 0x80) = MEM32(esi + 0x80) - 1;
    eax = MEM32(ebx + 0x8A04);
    edx = MEM32(ebx + 0x8A00);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(ebx + 0x8A04);
    edx++;
    edi--;
    MEM32(ebx + 0x8A04) = edx;
    ebp = ebp - 4;

loc_00044DF8:
    eax = MEM32(ebx + 0x8B0C);
    edi++;
    ebp = ebp + 4;
    if (CMP_L(edi, eax)) goto loc_00044D90; /* jl: less (signed <) */

loc_00044E06:
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00044E08:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
