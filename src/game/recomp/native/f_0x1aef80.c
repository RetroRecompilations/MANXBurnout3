#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AEF80
 * Original: 0x001AEF80 - 0x001AEFC7 (71 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AEF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001AEF80:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001AEFB1; /* jle: less or equal (signed <=) */

loc_001AEF92:
    edx = 0; /* xor self */

loc_001AEF94:
    if (CMP_GE(eax, MEM32(edi + 0x10))) goto loc_001AEFB1; /* jge: greater or equal (signed >=) */

loc_001AEF99:
    ecx = MEM32(edi + 0xC);
    ecx = ecx + edx;
    if (CMP_EQ(MEM8(ecx + 0x1E), 0)) goto loc_001AEFA9; /* je: equal / zero */

loc_001AEFA4:
    if (CMP_EQ(MEM32(ecx), ebp)) goto loc_001AEFB9; /* je: equal / zero */

loc_001AEFA8:
    ebx++;

loc_001AEFA9:
    eax++;
    edx = edx + 0x20;
    if (CMP_L(ebx, esi)) goto loc_001AEF94; /* jl: less (signed <) */

loc_001AEFB1:
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001AEFB9:
    ecx = MEM32(edi + 0xC);
    POP32(esp, esi);
    eax = eax << 5;
    POP32(esp, ebp);
    eax = eax + ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
