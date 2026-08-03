#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246DBB
 * Original: 0x00246DBB - 0x00246E6F (180 bytes, 53 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246DBB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00246DBB:
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x374160);
    PUSH32(esp, 0); sub_00244784(); /* call 0x00244784 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00246DC7:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_002486AE(); /* call 0x002486AE */

loc_00246DCE:
    POP32(esp, ecx);
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    MEM32(0x41D2D8) = 1;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(0x41D2D4) = LO8(eax);
    if (CMP_NE(MEM32(ebp + 8), esi)) goto loc_00246E33; /* jne: not equal / not zero */

loc_00246DEB:
    if (CMP_EQ(MEM32(0x76B92C), esi)) goto loc_00246E12; /* je: equal / zero */

loc_00246DF3:
    eax = MEM32(0x76B928);
    eax = eax - 4;
    MEM32(0x76B928) = eax;
    if (CMP_B(eax, MEM32(0x76B92C))) goto loc_00246E12; /* jb: below (unsigned <) */

loc_00246E08:
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_00246DF3; /* je: equal / zero */

loc_00246E0E:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00246E10:
    goto loc_00246DF3;

loc_00246E12:
    MEM32(ebp + -28) = 0x3BFDC8;

loc_00246E19:
    if (CMP_AE(MEM32(ebp + -28), 0x3BFDD0)) goto loc_00246E33; /* jae: above or equal (unsigned >=) */

loc_00246E22:
    eax = MEM32(ebp + -28);
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_00246E2D; /* je: equal / zero */

loc_00246E2B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00246E2D:
    MEM32(ebp + -28) = MEM32(ebp + -28) + 4;
    goto loc_00246E19;

loc_00246E33:
    MEM32(ebp + -32) = 0x3BFDD4;

loc_00246E3A:
    if (CMP_AE(MEM32(ebp + -32), 0x3BFDDC)) goto loc_00246E54; /* jae: above or equal (unsigned >=) */

loc_00246E43:
    eax = MEM32(ebp + -32);
    eax = MEM32(eax);
    if (CMP_EQ(eax, esi)) goto loc_00246E4E; /* je: equal / zero */

loc_00246E4C:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00246E4E:
    MEM32(ebp + -32) = MEM32(ebp + -32) + 4;
    goto loc_00246E3A;

loc_00246E54:
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00246E71(); /* call 0x00246E71 */

loc_00246E5D:
    if (CMP_NE(MEM32(ebp + 0xC), esi)) goto loc_00246E69; /* jne: not equal / not zero */

loc_00246E62:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B9E4), _icall_esp); /* indirect call */
    }

loc_00246E69:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00246E6E:
    esp += 4; return; /* ret */

}
