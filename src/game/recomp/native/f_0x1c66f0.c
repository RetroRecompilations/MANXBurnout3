#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C66F0
 * Original: 0x001C66F0 - 0x001C67CE (222 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C66F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C66F0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x30);
    ebp = 0; /* xor self */
    /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_001C6753; /* jle: less or equal (signed <=) */

loc_001C6702:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */

loc_001C6706:
    eax = MEM32(esi + 0x2C);
    eax = eax + ebx;
    MEM32(eax) = ebp;
    MEM32(eax + 0xC) = ebp;
    edi = MEM32(eax + 8);
    if (CMP_EQ(edi, ebp)) goto loc_001C673E; /* je: equal / zero */

loc_001C6717:
    /* cmp MEM32(edi), ebp - flags set for next jcc */
    ecx = edi;
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_001C6726; /* je: equal / zero */

loc_001C671D:
    /* nop */

loc_001C6720:
    ecx = MEM32(ecx);
    if (CMP_NE(MEM32(ecx), ebp)) goto loc_001C6720; /* jne: not equal / not zero */

loc_001C6726:
    edx = MEM32(eax + 4);
    edx = MEM32(edx + 0x10);
    /* cmp edx, ebp - flags set for next jcc */
    MEM32(ecx) = edx;
    if (CMP_EQ(edx, ebp)) goto loc_001C6735; /* je: equal / zero */

loc_001C6732:
    MEM32(edx + 4) = ecx;

loc_001C6735:
    ecx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edi;
    MEM32(eax + 8) = ebp;

loc_001C673E:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x30);
    eax++;
    ebx = ebx + 0x10;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_001C6706; /* jl: less (signed <) */

loc_001C6751:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001C6753:
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0); sub_001C1740(); /* call 0x001C1740 */

loc_001C675B:
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x14);
    eax = eax + 0x20;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001BEFF0(); /* call 0x001BEFF0 */

loc_001C67C2:
    esi = esi + 0x18;
    PUSH32(esp, 0); sub_001BEFF0(); /* call 0x001BEFF0 */

loc_001C67CA:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
