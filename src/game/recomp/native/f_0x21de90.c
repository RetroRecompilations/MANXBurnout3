#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021DE90
 * Original: 0x0021DE90 - 0x0021DF53 (195 bytes, 57 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021DE90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021DE90:
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x8C8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0021DF4D; /* je: equal / zero */

loc_0021DEA9:
    eax = MEM32(esi + 0x8C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00221F20(); /* call 0x00221F20 */

loc_0021DEB5:
    esp = esp + 4;
    if (CMP_EQ(eax, edi)) goto loc_0021DEE4; /* je: equal / zero */

loc_0021DEBC:
    /* nop */

loc_0021DEC0:
    ecx = MEM32(esi + 0x8C8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C200(); /* call 0x0021C200 */

loc_0021DECD:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 4), _icall_esp); /* indirect call */
    }

loc_0021DED1:
    edx = MEM32(esi + 0x8C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00221F20(); /* call 0x00221F20 */

loc_0021DEDD:
    esp = esp + 0x10;
    if (CMP_NE(eax, edi)) goto loc_0021DEC0; /* jne: not equal / not zero */

loc_0021DEE4:
    eax = MEM32(esi + 0x8D8);
    if (CMP_EQ(eax, edi)) goto loc_0021DF1A; /* je: equal / zero */

loc_0021DEEE:
    ecx = MEM32(esi + 0x8C8);
    edx = MEM32(esi + 0x8D4);
    MEM32(esp + 0x1C) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0x726F7374;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021DF17:
    esp = esp + 0xC;

loc_0021DF1A:
    edx = MEM32(esi + 0x8C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00221E80(); /* call 0x00221E80 */

loc_0021DF26:
    eax = MEM32(esi + 0x8C8);
    PUSH32(esp, eax);
    MEM32(esi + 0x8C4) = edi;
    PUSH32(esp, 0); sub_0021C030(); /* call 0x0021C030 */

loc_0021DF38:
    esp = esp + 8;
    MEM32(esi + 0x8C8) = edi;
    MEM32(esi + 0x8D4) = edi;
    MEM32(esi + 0x8D8) = edi;

loc_0021DF4D:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
