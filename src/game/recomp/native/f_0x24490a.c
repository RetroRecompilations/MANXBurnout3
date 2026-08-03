#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024490A
 * Original: 0x0024490A - 0x00244972 (104 bytes, 33 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024490A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024490A:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x2448E8);
    PUSH32(esp, MEM32(0));
    MEM32(0) = esp;

loc_00244927:
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00244964; /* je: equal / zero */

loc_00244936:
    if (CMP_EQ(esi, MEM32(esp + 0x24))) goto loc_00244964; /* je: equal / zero */

loc_0024493C:
    esi = esi + esi * 2;
    ecx = MEM32(ebx + esi * 4);
    MEM32(esp + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(MEM32(ebx + esi * 4 + 4), 0)) goto loc_00244962; /* jne: not equal / not zero */

loc_00244950:
    PUSH32(esp, 0x101);
    eax = MEM32(ebx + esi * 4 + 8);
    PUSH32(esp, 0); sub_0024499E(); /* call 0x0024499E */

loc_0024495E:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + esi * 4 + 8), _icall_esp); /* indirect call */
    }

loc_00244962:
    goto loc_00244927;

loc_00244964:
    { uint32_t _tmp; POP32(esp, _tmp); MEM32(0) = _tmp; }
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
