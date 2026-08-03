#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004E360
 * Original: 0x0004E360 - 0x0004E3AC (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004E360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0004E360:
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    edx = MEM32(eax + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    edx = ecx + edx + 0x14;
    ecx = 0; /* xor self */
    if (CMP_LE(MEM16(eax + 0x12), LO16(ecx))) goto loc_0004E3AB; /* jle: less or equal (signed <=) */

loc_0004E376:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0004E380:
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    edi = MEM32(eax + 4);
    esi = MEM32(esi + edi + 0x64);
    ebp = MEM32(edx + 0x2C);
    ebx = ebx + ecx;
    ebx = ebx << 4;
    MEM32(ebx + ebp + 0xC) = esi;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    ecx++;
    if (CMP_L(ecx, esi)) goto loc_0004E380; /* jl: less (signed <) */

loc_0004E3A7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0004E3AB:
    esp += 4; return; /* ret */

}
