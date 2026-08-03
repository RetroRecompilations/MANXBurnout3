#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000509B0
 * Original: 0x000509B0 - 0x00050A64 (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000509B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000509B0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    ecx = 3;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_000509C9:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    eax = MEM32(esi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    ebp = MEM32(edx + eax + 0x28);
    edi = edx + eax + 0x14;
    eax = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    eax = eax + 0x73B2A0;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(edi + 0x2C);
    edx = ebx;
    ecx = ebx + 2;
    edx = edx << 4;
    MEM32(esp + 0xC) = ecx;
    MEM32(edx + eax) = 8;
    PUSH32(esp, ebp);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00050A11:
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, ebp);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00050A1E:
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, ebp);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00050A2B:
    MEM32(esi + 0x28) = eax;
    PUSH32(esp, ebp);
    eax = ebx;
    ecx = edi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00050A38:
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_00050A47:
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    MEM32(esi + 0x34) = eax;
    PUSH32(esp, 0); sub_00050A70(); /* call 0x00050A70 */

loc_00050A52:
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM8(ecx + 0xE0) = LO8(eax);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
