#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1A60
 * Original: 0x001C1A60 - 0x001C1B13 (179 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001C1A60:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    edx = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -4);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(eax + 0x14);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -16) = edx;
    if (TEST_NZ(ebx, ebx)) goto loc_001C1ACD; /* jne: not equal / not zero */

loc_001C1AAD:
    if (CMP_EQ(edi, MEM32(0x4A1B78))) goto loc_001C1AF3; /* je: equal / zero */

loc_001C1AB5:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C1AC3; /* jbe: below or equal (unsigned <=) */

loc_001C1ABE:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C1AC3:
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001C1AE7; /* je: equal / zero */

loc_001C1ACA:
    PUSH32(esp, eax);
    goto loc_001C1AE0;

loc_001C1ACD:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C1ADB; /* jbe: below or equal (unsigned <=) */

loc_001C1AD6:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C1ADB:
    ecx = MEM32(edi + ebx * 4 + 0x14);
    PUSH32(esp, ecx);

loc_001C1AE0:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034DE60(); /* call 0x0034DE60 */

loc_001C1AE7:
    MEM32(0x75DB70) = edi;
    MEM32(0x4A1B78) = edi;

loc_001C1AF3:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x4A42C0);
    ecx = esi + 0x10;
    eax = ebp + -24;
    PUSH32(esp, 0); sub_001C7430(); /* call 0x001C7430 */

loc_001C1B09:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
