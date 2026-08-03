#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB480
 * Original: 0x001CB480 - 0x001CB5AB (299 bytes, 91 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB480(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB480:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0); sub_001F9050(); /* call 0x001F9050 */

loc_001CB492:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    MEM32(esi + 0x16C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esi + 0x15C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x160) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001CB4B8:
    MEM32(esi + 0x130) = eax;
    edx = 0; /* xor self */
    MEM32(esi + 0x13C) = edi;
    MEM8(esi + 0x194) = LO8(ebx);
    MEM32(esi + 0x170) = ebx;
    MEM8(esi + 0x195) = LO8(ebx);
    MEM8(esi + 0x196) = LO8(ebx);
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x164) = ebx;
    ebp = esi + 0x14C;
    eax = ebp;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    esp = esp + 0x1C;
    edx = esi + 0x144;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(esp + 0xC) = 2;
    goto loc_001CB520;

    /* nop */

loc_001CB520:
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001F6370(); /* call 0x001F6370 */

loc_001CB529:
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB537:
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x174) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB546:
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x178) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB555:
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x17C) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB564:
    PUSH32(esp, 5);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x180) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB573:
    esp = esp + 0x44;
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x184) = eax;
    PUSH32(esp, 0); sub_001F63B0(); /* call 0x001F63B0 */

loc_001CB585:
    PUSH32(esp, edi);
    MEM32(esi + 0x188) = eax;
    PUSH32(esp, 0); sub_001F5AA0(); /* call 0x001F5AA0 */

loc_001CB591:
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_001CB520; /* jne: not equal / not zero */

loc_001CB5A9:
    POP32(esp, edi);
    POP32(esp, ebp);

}
