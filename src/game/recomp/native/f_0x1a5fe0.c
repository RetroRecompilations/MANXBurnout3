#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5FE0
 * Original: 0x001A5FE0 - 0x001A6066 (134 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5FE0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x40);
    ecx = MEM32(eax + 8);
    ebx = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A6060; /* jle: less or equal (signed <=) */

loc_001A5FF3:
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001A5FF5:
    ecx = MEM32(eax);
    ecx = MEM32(ecx + ebx * 4);
    if (CMP_NE(ecx, 0xFF)) goto loc_001A6006; /* jne: not equal / not zero */

loc_001A6002:
    edi = 0; /* xor self */
    goto loc_001A6011;

loc_001A6006:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4C);
    ecx = ecx + 0x60EC2C;
    edi = ecx;

loc_001A6011:
    edx = MEM32(eax + 4);
    esi = MEM32(edx + ebx * 4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0019E640(); /* call 0x0019E640 */

loc_001A6028:
    if (TEST_NZ(eax, eax)) goto loc_001A6038; /* jne: not equal / not zero */

loc_001A602C:
    edx = MEM32(edi);
    edx = MEM32(edx + 0x10);
    edx--;
    MEM32(esp + 0x18) = edx;
    goto loc_001A603C;

loc_001A6038:
    edx = MEM32(esp + 0x18);

loc_001A603C:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esi;
    edi = ebp;
    PUSH32(esp, 0); sub_001A6070(); /* call 0x001A6070 */

loc_001A6053:
    eax = MEM32(ebp + 0x40);
    ecx = MEM32(eax + 8);
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_001A5FF5; /* jl: less (signed <) */

loc_001A605E:
    POP32(esp, edi);
    POP32(esp, esi);

loc_001A6060:
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}
