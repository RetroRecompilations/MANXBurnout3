#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8510
 * Original: 0x001C8510 - 0x001C864B (315 bytes, 98 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8510:
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x4A1B9C);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_BE(eax & eax, 0)) goto loc_001C8529; /* jbe: below or equal (unsigned <=) */

loc_001C8524:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C8529:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm1.f[0] = MEMF(edi); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    esi = MEM32(0x4A1B88);
    MEM32(esp + 0x10) = ecx;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = (int32_t)xmm1.f[0]; /* cvttss2si */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x4A1B84);
    edi = 0; /* xor self */
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_GE(eax, ecx)) goto loc_001C862E; /* jge: greater or equal (signed >=) */

loc_001C8589:
    if (CMP_LE(edx & edx, 0)) goto loc_001C862E; /* jle: less or equal (signed <=) */

loc_001C8591:
    if (CMP_GE(MEM32(esp + 0x10), esi)) goto loc_001C862E; /* jge: greater or equal (signed >=) */

loc_001C859B:
    ebp = MEM32(esp + 0x14);
    if (CMP_LE(ebp & ebp, 0)) goto loc_001C862E; /* jle: less or equal (signed <=) */

loc_001C85A7:
    /* test eax, eax - flags set for next jcc */
    ebx = eax;
    if (TEST_S(eax, eax)) ebx = MEM32(esp + 0x18); /* cmovl */
    eax = MEM32(esp + 0x10);
    /* cmp edx, ecx - flags set for next jcc */
    if (CMP_LE(edx, ecx)) ecx = edx; /* cmovle */
    /* test eax, eax - flags set for next jcc */
    if (CMP_GE(eax & eax, 0)) edi = eax; /* cmovge */
    eax = esi;
    /* cmp ebp, eax - flags set for next jcc */
    if (CMP_LE(ebp, eax)) esi = ebp; /* cmovle */
    if (CMP_EQ(ebx, ecx)) goto loc_001C8611; /* je: equal / zero */

loc_001C85C9:
    if (CMP_EQ(edi, esi)) goto loc_001C8611; /* je: equal / zero */

loc_001C85CD:
    eax = MEM32(0x4A1B7C);
    edx = eax + ebx;
    eax = eax + ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x4A1B80);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + edi;
    PUSH32(esp, 0);
    eax = eax + esi;
    PUSH32(esp, 1);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_0034E1B0(); /* call 0x0034E1B0 */

loc_001C85FF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x4A1B60) = 1;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001C8611:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x4A1B60) = 2;
    PUSH32(esp, 0); sub_0034E1B0(); /* call 0x0034E1B0 */

loc_001C8626:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_001C862E:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034E1B0(); /* call 0x0034E1B0 */

loc_001C8639:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x4A1B60) = 2;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}
