#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AEDB0
 * Original: 0x001AEDB0 - 0x001AEE1B (107 bytes, 38 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEDB0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEDB0:
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001AEEB0(); /* call 0x001AEEB0 */

loc_001AEDC4:
    esp = esp + 8;
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_001AED70(); /* call 0x001AED70 */

loc_001AEDD2:
    esi = eax;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x3B12C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001AEDE4:
    edx = MEM32(edi + 0xC);
    ecx = MEM32(esp + 0x28);
    esi = esi << 5;
    esi = esi + edx;
    edx = MEM32(esp + 0x2C);
    eax = esi;
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x30));
    MEM32(eax + 0x10) = ebp;
    MEM8(eax + 0x1D) = LO8(ecx);
    esp = esp + 0xC;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(edi + 8);
    ecx++;
    POP32(esp, esi);
    MEM32(edi + 8) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}
