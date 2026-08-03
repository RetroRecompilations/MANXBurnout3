#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C17A0
 * Original: 0x001C17A0 - 0x001C17E7 (71 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17A0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C17A0:
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x2C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    if (TEST_Z(esi, esi)) goto loc_001C17E5; /* je: equal / zero */

loc_001C17CD:
    /* nop */

loc_001C17D0:
    ecx = MEM32(edi + 0x14);
    ecx = ecx + 0x20;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    PUSH32(esp, 0); sub_001C1670(); /* call 0x001C1670 */

loc_001C17DF:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001C17D0; /* jne: not equal / not zero */

loc_001C17E5:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
