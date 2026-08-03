#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019CC60
 * Original: 0x0019CC60 - 0x0019CD05 (165 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019CC60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019CC60:
    eax = MEM32(esi + 0x3C);
    eax--;
    PUSH32(esp, edi);
    if ((eax == 0)) goto loc_0019CCD4; /* je: equal / zero */

loc_0019CC67:
    eax--;
    if ((eax == 0)) goto loc_0019CCA5; /* je: equal / zero */

loc_0019CC6A:
    eax--;
    if ((eax != 0)) goto loc_0019CD01; /* jne: not equal / not zero */

loc_0019CC71:
    eax = MEM32(esi + 0x30);
    edi = MEM32(esi + eax * 4 + 0x154);
    ecx = edi + 0x50;
    PUSH32(esp, 0); sub_0019B440(); /* call 0x0019B440 */

loc_0019CC83:
    MEM32(edi + 0x64) = 0;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + ecx * 4 + 0x154);
    MEM32(edx) = 2;
    MEM32(esi + 0x3C) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0019CCA5:
    eax = MEM32(esi + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    edi = MEM32(esi + 0x14);
    MEM32(esi + 0x30) = edx;
    edi = MEM32(edi + 8);
    ecx = MEM32(0x739B60);
    edx = MEM32(esi + edx * 4 + 0x154);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0019CCC9:
    MEM32(esi + 0x3C) = 3;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0019CCD4:
    ecx = MEM32(0x7397B4);
    edx = MEM32(ecx + 0x58);
    eax = MEM32(esi + 0x50);
    eax = eax << 4;
    eax = eax + edx;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x739B60);
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0019CCFA:
    MEM32(esi + 0x3C) = 2;

loc_0019CD01:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
