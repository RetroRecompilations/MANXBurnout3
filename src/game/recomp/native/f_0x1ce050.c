#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE050
 * Original: 0x001CE050 - 0x001CE0A2 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE050:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x4D8) = ecx;
    ebx = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001CE09C; /* jle: less or equal (signed <=) */

loc_001CE068:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    /* nop */

loc_001CE070:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001CE3B0(); /* call 0x001CE3B0 */

loc_001CE07D:
    ecx = MEM32(esp + 0x14);
    MEM8(esi + 0x268) = 0;
    eax = MEM32(ecx + 0x4D8);
    ebp++;
    edi = edi + ebx;
    esi = esi + 0x26C;
    if (CMP_L(ebp, eax)) goto loc_001CE070; /* jl: less (signed <) */

loc_001CE09B:
    POP32(esp, edi);

loc_001CE09C:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}
