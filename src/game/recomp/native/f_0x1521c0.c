#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001521C0
 * Original: 0x001521C0 - 0x00152285 (197 bytes, 69 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001521C0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001521C0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_001521F8; /* je: equal / zero */

loc_001521CB:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_001521D5:
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_001521DF:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0x10) = ebx;

loc_001521F8:
    edi = MEM32(esi + 0x14);
    if (CMP_EQ(edi, ebx)) goto loc_0015222C; /* je: equal / zero */

loc_001521FF:
    edx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00152209:
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00152213:
    SET_LO8(eax, MEM8(edi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(edi + 0x34) = LO8(ebx);
    MEMF(edi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x37) = LO8(eax);
    MEM32(esi + 0x14) = ebx;

loc_0015222C:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = 0xFFFFFFFFu;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    /* cmp MEM32(esi + 0x20), ebx - flags set for next jcc */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_NE(MEM32(esi + 0x20), ebx)) goto loc_0015225E; /* jne: not equal / not zero */

loc_00152249:
    ecx = MEM32(0x40FAF0);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = 0x39D158;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0015225B:
    MEM32(esi + 0x20) = eax;

loc_0015225E:
    if (CMP_NE(MEM32(esi + 0x24), ebx)) goto loc_00152278; /* jne: not equal / not zero */

loc_00152263:
    edx = MEM32(0x40FAF0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = 0x39D160;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00152275:
    MEM32(esi + 0x24) = eax;

loc_00152278:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
