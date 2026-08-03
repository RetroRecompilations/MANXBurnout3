#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142890
 * Original: 0x00142890 - 0x0014290C (124 bytes, 44 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142890(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00142890:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 0x18);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001428CE; /* je: equal / zero */

loc_0014289E:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001428A8:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_001428B2:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = LO8(ebx);
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(edi + 0x18) = ebx;
    MEM32(edi + 0x1C) = ebx;

loc_001428CE:
    MEM32(edi + 4) = ebx;
    PUSH32(esp, 0); sub_00142910(); /* call 0x00142910 */

loc_001428D6:
    eax = MEM32(edi + 0x44);
    if (CMP_EQ(eax, ebx)) goto loc_001428F0; /* je: equal / zero */

loc_001428DD:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_001428E7:
    MEM32(edi + 0x44) = 0;
    ebx = 0; /* xor self */

loc_001428F0:
    eax = MEM32(edi + 8);
    if (CMP_EQ(eax, ebx)) goto loc_00142908; /* je: equal / zero */

loc_001428F7:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_00142901:
    MEM32(edi + 8) = 0;

loc_00142908:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
