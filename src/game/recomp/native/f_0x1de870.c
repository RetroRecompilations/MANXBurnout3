#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DE870
 * Original: 0x001DE870 - 0x001DE8FF (143 bytes, 48 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DE870(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DE870:
    eax = MEM32(0x41AB5C);
    ecx = MEM32(eax + 0x759300);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30407);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E4), _icall_esp); /* indirect call */
    }

loc_001DE888:
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(esi, eax)) goto loc_001DE8EA; /* je: equal / zero */

loc_001DE893:
    ecx = MEM32(0x7592F8);
    edx = MEM32(esp + 8);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(esi + 0x22) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    MEM16(esi + 0x1C) = LO16(eax);
    MEM16(esi + 0x1E) = LO16(eax);
    MEM32(esi) = esi;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001DE8CD:
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_001DE8EE; /* jne: not equal / not zero */

loc_001DE8D5:
    eax = MEM32(0x41AB5C);
    ecx = MEM32(eax + 0x759300);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593E8), _icall_esp); /* indirect call */
    }

loc_001DE8E7:
    esp = esp + 8;

loc_001DE8EA:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001DE8EE:
    PUSH32(esp, 0x3C0B08);
    PUSH32(esp, 0); sub_001E1AF0(); /* call 0x001E1AF0 */

loc_001DE8F8:
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
