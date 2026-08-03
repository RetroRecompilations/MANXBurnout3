#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBBC0
 * Original: 0x001CBBC0 - 0x001CBC9C (220 bytes, 66 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBBC0:
    esp = esp - 0x38;
    edx = MEM32(esi + 0x16C);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    edi = eax;
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = 3;
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0); sub_001F94A0(); /* call 0x001F94A0 */

loc_001CBBEF:
    eax = MEM32(esp + 0x38);
    esp = esp + 8;
    if (CMP_A(eax, edi)) goto loc_001CBC55; /* ja: above (unsigned >) */

loc_001CBBFA:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_001CBBFC:
    ecx = MEM32(esi + 0x16C);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F9670(); /* call 0x001F9670 */

loc_001CBC17:
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020C280(); /* call 0x0020C280 */

loc_001CBC21:
    ebx = eax;
    eax = MEM32(esi + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x13C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x13C))); }
    ebp = 0x24;
    ebx = ebx + 0x10;
    ecx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ecx = ecx - edx;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001FA7D0(); /* call 0x001FA7D0 */

loc_001CBC46:
    edi = edi - eax;
    eax = MEM32(esp + 0x4C);
    esp = esp + 0x14;
    if (CMP_BE(eax, edi)) goto loc_001CBBFC; /* jbe: below or equal (unsigned <=) */

loc_001CBC53:
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001CBC55:
    ecx = MEM32(esp + 0x40);
    eax = esp + 0x18;
    edx = esp + 4;
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 1;
    MEM32(esp + 0x24) = 3;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x2C) = 2;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_001F9170(); /* call 0x001F9170 */

loc_001CBC92:
    esp = esp + 8;
    POP32(esp, edi);
    esp = esp + 0x38;
    esp += 8; return; /* ret 4 */

}
