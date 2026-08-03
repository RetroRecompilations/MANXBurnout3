#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013E980
 * Original: 0x0013E980 - 0x0013EA15 (149 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E980(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0013E980:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx + 0x10;
    PUSH32(esp, 0); sub_00137F50(); /* call 0x00137F50 */

loc_0013E98A:
    eax = ebx + 0xC68;
    PUSH32(esp, 0); sub_0014A490(); /* call 0x0014A490 */

loc_0013E995:
    esi = ebx + 0x1150;
    PUSH32(esp, 0); sub_0014B3D0(); /* call 0x0014B3D0 */

loc_0013E9A0:
    eax = ebx + 0x1A90;
    PUSH32(esp, 0); sub_001434E0(); /* call 0x001434E0 */

loc_0013E9AB:
    eax = ebx + 0x3440;
    PUSH32(esp, 0); sub_0013FE10(); /* call 0x0013FE10 */

loc_0013E9B6:
    esi = ebx + 0x34C8;
    PUSH32(esp, 0); sub_00153B00(); /* call 0x00153B00 */

loc_0013E9C1:
    ecx = MEM32(0x3EC970);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = edx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    /* cmp ecx, edx - flags set for next jcc */
    POP32(esp, edi);
    MEMF(ebx + 0x34C0) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x34C4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if (CMP_NE(ecx, edx)) goto loc_0013E9EA; /* jne: not equal / not zero */

loc_0013E9E5:
    MEM32(0x3EC970) = eax;

loc_0013E9EA:
    ecx = 1;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = ecx;
    /* cmp MEM32(0x3EC24C), edx - flags set for next jcc */
    MEM32(ebx + 0x3D28) = eax;
    MEM32(ebx + 0x3D2C) = eax;
    MEM32(ebx + 0x3D34) = eax;
    if (CMP_NE(MEM32(0x3EC24C), edx)) goto loc_0013EA14; /* jne: not equal / not zero */

loc_0013EA0F:
    MEM32(0x3EC24C) = eax;

loc_0013EA14:
    esp += 4; return; /* ret */

}
