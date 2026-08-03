#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBB50
 * Original: 0x001CBB50 - 0x001CBBB7 (103 bytes, 29 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBB50(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001CBB50:
    eax = MEM32(esi + 0x16C);
    esp = esp - 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CBB5F:
    esp = esp + 4;
    if (CMP_L(eax, 5)) goto loc_001CBBAF; /* jl: less (signed <) */

loc_001CBB67:
    if (CMP_G(eax, 6)) goto loc_001CBBAF; /* jg: greater (signed >) */

loc_001CBB6C:
    edx = MEM32(esi + 0x16C);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 3;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_001F9220(); /* call 0x001F9220 */

loc_001CBB8C:
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x20);
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp = esp + 8;
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_001CBBAF:
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}
