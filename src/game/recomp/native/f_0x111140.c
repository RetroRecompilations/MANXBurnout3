#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111140
 * Original: 0x00111140 - 0x0011121E (222 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00111140:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xE6C80);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_0011116F; /* jle: less or equal (signed <=) */

loc_00111151:
    edi = esi + 0x1CB80;

loc_00111157:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_0011115E:
    eax = MEM32(esi + 0xE6C80);
    ebx++;
    edi = edi + 0x4AD0;
    if (CMP_L(ebx, eax)) goto loc_00111157; /* jl: less (signed <) */

loc_0011116F:
    eax = MEM32(esi + 0xE6C84);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00111199; /* jle: less or equal (signed <=) */

loc_0011117B:
    edi = esi + 0x26120;

loc_00111181:
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00111188:
    eax = MEM32(esi + 0xE6C84);
    ebx++;
    edi = edi + 0x1580;
    if (CMP_L(ebx, eax)) goto loc_00111181; /* jl: less (signed <) */

loc_00111199:
    eax = MEM32(esi + 0xE6C88);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001111C8; /* jle: less or equal (signed <=) */

loc_001111A5:
    edi = esi + 0x2CCA0;
    goto loc_001111B0;

    /* nop */

loc_001111B0:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001111B7:
    eax = MEM32(esi + 0xE6C88);
    ebx++;
    edi = edi + 0x1560;
    if (CMP_L(ebx, eax)) goto loc_001111B0; /* jl: less (signed <) */

loc_001111C8:
    edi = esi + 0x33780;
    ebx = 0x40;

loc_001111D3:
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001111DA:
    edi = edi + 0x2430;
    ebx--;
    if ((ebx != 0)) goto loc_001111D3; /* jne: not equal / not zero */

loc_001111E3:
    edi = esi + 0xC4380;
    ebx = 0x20;
    edi = edi;

loc_001111F0:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001111F7:
    edi = edi + 0x780;
    ebx--;
    if ((ebx != 0)) goto loc_001111F0; /* jne: not equal / not zero */

loc_00111200:
    esi = esi + 0xD3380;
    edi = 0x40;
    goto loc_00111210;

    /* nop */

loc_00111210:
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_00111217:
    esi = esi + 0x4E0;
    edi--;

}
