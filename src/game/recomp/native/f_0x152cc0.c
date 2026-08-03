#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152CC0
 * Original: 0x00152CC0 - 0x00152DF9 (313 bytes, 86 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152CC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00152CC0:
    eax = MEM32(esi);
    esp = esp - 0x14;
    if (CMP_NE(eax, 1)) goto loc_00152DF5; /* jne: not equal / not zero */

loc_00152CCE:
    eax = MEM32(esi + 0x54);
    if (CMP_EQ(eax, 1)) goto loc_00152CDF; /* je: equal / zero */

loc_00152CD6:
    if (CMP_NE(eax, 2)) goto loc_00152DF5; /* jne: not equal / not zero */

loc_00152CDF:
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x58);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x5C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x5C)); }
    ecx = esp;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = 4;
    if (TEST_NZ(edx, edx)) goto loc_00152DF2; /* jne: not equal / not zero */

loc_00152D02:
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x60);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = 0x20;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152D1F:
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x3C);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x18) = 0x24;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152D3C:
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x40);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = 0x28;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152D59:
    edx = MEM32(esi + 4);
    ecx = MEM32(esi + 0x60);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = 0x2C;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152D76:
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x44);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x30) = 0x34;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152D93:
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x10);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = 0x1C;
    PUSH32(esp, 0); sub_0020A1B0(); /* call 0x0020A1B0 */

loc_00152DB0:
    edx = MEM32(0x3EC430);
    MEM32(esi + 0x5C) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(0x47A07A);
    eax = MEM32(0x47A078);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x47A07C);
    eax = eax + ecx;
    MEM32(0x47A078) = eax;
    ecx = ecx + eax;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x3EC434));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x3EC434)); }
    MEM32(0x47A07C) = ecx;
    eax = MEM32(esi + 0x5C);
    esp = esp + 0x30;
    eax = eax + edx;
    MEM32(esi + 0x5C) = eax;

loc_00152DF2:
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1;

loc_00152DF5:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
