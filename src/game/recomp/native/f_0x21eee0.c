#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021EEE0
 * Original: 0x0021EEE0 - 0x0021EF92 (178 bytes, 63 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EEE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021EEE0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x1A8);
    if (TEST_NZ(eax, eax)) goto loc_0021EEF3; /* jne: not equal / not zero */

loc_0021EEEF:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021EEF3:
    ecx = MEM32(esi + 0x1AC);
    eax = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19660D);
    PUSH32(esp, edi);
    eax = eax & 0xFFFF;
    edx = 0; /* xor self */
    edi = 0x55;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = MEM32(esp + 0x10);
    ecx = ecx + 0x3C6EF35F;
    MEM32(esi + 0x1AC) = ecx;
    edi = edx;
    edi = edi + 0xF;
    if (TEST_Z(eax, eax)) goto loc_0021EF67; /* je: equal / zero */

loc_0021EF29:
    eax = MEM32(esi + 0x8E0);
    ecx = MEM32(esi + 0x8E4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    edx = esi + 0x128;
    PUSH32(esp, edx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xA4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0021EBD0(); /* call 0x0021EBD0 */

loc_0021EF61:
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0021EF67:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_0021EF70:
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3E8);
    ecx = MEM32(esi + 0x10);
    eax = eax + edi;
    MEM32(esi + 0x14) = eax;
    eax = 7;
    esp = esp + 4;
    if (CMP_EQ(ecx, eax)) goto loc_0021EF8D; /* je: equal / zero */

loc_0021EF8A:
    MEM32(esi + 0x10) = eax;

loc_0021EF8D:
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
