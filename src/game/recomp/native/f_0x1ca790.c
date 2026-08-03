#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA790
 * Original: 0x001CA790 - 0x001CA81E (142 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA790:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, ebp);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    edx = esi + 0x18;
    PUSH32(esp, edx);
    eax = esi + 0x14;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C8); /* movss */
    PUSH32(esp, eax);
    eax = edi;
    MEM32(esi) = ebx;
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x2F) = LO8(ebx);
    MEM8(esi + 0x30) = LO8(ebx);
    MEM8(esi + 0x31) = LO8(ebx);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA820(); /* call 0x001CA820 */

loc_001CA7E1:
    eax = MEM32(esp + 0x28);
    esp = esp + 0x14;
    if (CMP_NE(eax, 2)) goto loc_001CA80F; /* jne: not equal / not zero */

loc_001CA7ED:
    PUSH32(esp, ebp);
    ecx = esi + 0x2D;
    PUSH32(esp, ecx);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    esi = esi + 0x20;
    eax = edi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CA820(); /* call 0x001CA820 */

loc_001CA806:
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001CA80F:
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x2D) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
