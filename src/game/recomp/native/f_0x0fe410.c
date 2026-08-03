#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FE410
 * Original: 0x000FE410 - 0x000FE4C9 (185 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE410:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    MEM32(edi + 0x30DE8) = eax;
    MEM32(edi + 0x30DE0) = eax;
    eax = MEM32(edi + 0x28);
    MEMF(edi + 0x30D98) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = 0; /* xor self */
    /* cmp eax, edx - flags set for next jcc */
    MEM16(edi + 0x30DC4) = LO16(edx);
    MEM16(edi + 0x30DC6) = LO16(edx);
    MEM8(edi + 0x30DC8) = 1;
    MEM32(edi + 0x30DDC) = edx;
    MEMF(edi + 0x30DE4) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x30DEC) = LO8(edx);
    MEM8(edi + 0x9A54) = LO8(edx);
    if (CMP_LE(eax, edx)) goto loc_000FE48C; /* jle: less or equal (signed <=) */

loc_000FE472:
    esi = edi + 8;

loc_000FE475:
    eax = MEM32(esi);
    if (CMP_EQ(eax, edx)) goto loc_000FE481; /* je: equal / zero */

loc_000FE47B:
    MEM8(eax + 0x4F4) = LO8(edx);

loc_000FE481:
    eax = MEM32(edi + 0x28);
    ecx++;
    esi = esi + 4;
    if (CMP_L(ecx, eax)) goto loc_000FE475; /* jl: less (signed <) */

loc_000FE48C:
    eax = MEM32(edi + 0x92A8);
    ecx = edi + 0x92A8;
    MEM8(edi + 0x30DD8) = LO8(edx);
    MEM32(edi + 0x30DD4) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x34), _icall_esp); /* indirect call */
    }

loc_000FE4A7:
    ebx = edi + 0x307E0;
    ebp = 8;

loc_000FE4B2:
    esi = MEM32(ebx);
    PUSH32(esp, 0); sub_00100440(); /* call 0x00100440 */

loc_000FE4B9:
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_000FE4B2; /* jne: not equal / not zero */

loc_000FE4BF:
    PUSH32(esp, 0); sub_000FE520(); /* call 0x000FE520 */

loc_000FE4C4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
