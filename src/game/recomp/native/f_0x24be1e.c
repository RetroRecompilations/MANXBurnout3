#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BE1E
 * Original: 0x0024BE1E - 0x0024BEB2 (148 bytes, 51 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BE1E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024BE1E:
    PUSH32(esp, 8);
    PUSH32(esp, 0x374C68);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024BE2A:
    edi = MEM32(ebp + 8);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx >> 5);
    eax = edi;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    ecx = MEM32(ecx * 4 + 0x76B820);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0024BE8C; /* jne: not equal / not zero */

loc_0024BE4B:
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_0024BE52:
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(MEM32(esi + 8), ebx)) goto loc_0024BE83; /* jne: not equal / not zero */

loc_0024BE5B:
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B626(); /* call 0x0024B626 */

loc_0024BE69:
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0024BE80; /* jne: not equal / not zero */

loc_0024BE6F:
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024490A(); /* call 0x0024490A */

loc_0024BE7A:
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_0024BEAC;

loc_0024BE80:
    MEM32(esi + 8) = MEM32(esi + 8) + 1;

loc_0024BE83:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0024BEB5(); /* call 0x0024BEB5 */

loc_0024BE8C:
    eax = edi;
    eax = (uint32_t)((int32_t)eax >> 5);
    edi = edi & 0x1F;
    ecx = edi + edi * 4;
    eax = MEM32(eax * 4 + 0x76B820);
    eax = eax + ecx * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B880), _icall_esp); /* indirect call */
    }

loc_0024BEA9:
    eax = 0; /* xor self */
    eax++;

loc_0024BEAC:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0024BEB1:
    esp += 4; return; /* ret */

}
