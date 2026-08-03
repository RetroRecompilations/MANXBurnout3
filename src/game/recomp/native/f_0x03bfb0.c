#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003BFB0
 * Original: 0x0003BFB0 - 0x0003C0CB (283 bytes, 95 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003BFB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003BFB0:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 4;
    esi = esi + 0x387358;
    eax = MEM32(esi + 4);
    MEM32(edi + 0x10) = eax;
    eax = eax + eax * 2;
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034FBC0(); /* call 0x0034FBC0 */

loc_0003BFD3:
    ecx = MEM32(0x35FB48);
    ebp = eax;
    ebx = ecx;
    MEM32(edi) = ebp;
    eax = MEM32(ebx);
    if (CMP_B(eax, MEM32(ebx + 4))) goto loc_0003BFFA; /* jb: below (unsigned <) */

loc_0003BFE6:
    eax = MEM32(0x3609FC);
    PUSH32(esp, eax);
    eax = eax >> 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003518E0(); /* call 0x003518E0 */

loc_0003BFF4:
    ecx = MEM32(0x35FB48);

loc_0003BFFA:
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_0003C02E; /* je: equal / zero */

loc_0003C010:
    /* test MEM32(ebp), 0x780000 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    if (TEST_Z(MEM32(ebp), 0x780000)) goto loc_0003C023; /* je: equal / zero */

loc_0003C01C:
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    goto loc_0003C029;

loc_0003C023:
    if (TEST_Z(eax, eax)) goto loc_0003C02E; /* je: equal / zero */

loc_0003C027:
    PUSH32(esp, 0x10);

loc_0003C029:
    PUSH32(esp, 0); sub_00351770(); /* call 0x00351770 */

loc_0003C02E:
    edx = MEM32(ebp + 4);
    eax = MEM32(edi + 0x10);
    edx = edx | 0x80000000u;
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0003C06E; /* jle: less or equal (signed <=) */

loc_0003C040:
    eax = MEM32(esi + 0xC);
    eax = ZX8(MEM8(eax + ecx));
    ebx = MEM32(esi + 8);
    eax = eax + eax * 2;
    ebp = MEM32(ebx + eax * 4);
    eax = ebx + eax * 4;
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(ebx + 4) = ebp;
    eax = MEM32(eax + 8);
    edx = edx + 0xC;
    MEM32(ebx + 8) = eax;
    eax = MEM32(edi + 0x10);
    ecx++;
    if (CMP_L(ecx, eax)) goto loc_0003C040; /* jl: less (signed <) */

loc_0003C06E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0003C0C4; /* jle: less or equal (signed <=) */

loc_0003C07E:
    ebp = 0; /* xor self */

loc_0003C080:
    eax = MEM32(esi + 8);
    eax = eax + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DBB70(); /* call 0x001DBB70 */

loc_0003C08B:
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(edi + 0x14); /* movss */
    esp = esp + 4;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esi);
    ebx++;
    ebp = ebp + 0xC;
    if (CMP_L(ebx, eax)) goto loc_0003C080; /* jl: less (signed <) */

loc_0003C0C4:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
