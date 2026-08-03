#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001987A0
 * Original: 0x001987A0 - 0x00198997 (503 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001987A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001987A0:
    esp = esp - 8;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esi + 0x13F4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x13F4);
    PUSH32(esp, eax);
    eax = esi;
    edi = edi + 0x10D0;
    ebp = ebp + 0x10D0;
    PUSH32(esp, 0); sub_00197F90(); /* call 0x00197F90 */

loc_001987D3:
    edx = MEM32(0x3F7438);
    ecx = MEM32(esi + 0x13F4);
    esp = esp + 4;
    ebx = eax;
    ebx--;
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    eax = edi + 0x124;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = 4;
    if ((LO8(ebx) != 0)) goto loc_00198807; /* jne: not equal / not zero */

loc_001987FF:
    MEM32(esp + 0x14) = 3;

loc_00198807:
    edx = MEM32(eax + 0x148);
    /* cmp MEM8(edx + 0x11EE), 0 - flags set for next jcc */
    edx = MEM32(esp + 0x10);
    if (CMP_EQ(MEM8(edx + 0x11EE), 0)) goto loc_00198820; /* je: equal / zero */

loc_0019881A:
    edx = edx + MEM32(0x3F7444);

loc_00198820:
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019A050(); /* call 0x0019A050 */

loc_0019882F:
    xmm0.f[0] = MEMF(0x3F742C); /* movss */
    eax = 0x4A71A0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00198847:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001988D1; /* jne: not equal / not zero */

loc_0019884F:
    xmm0.f[0] = MEMF(edi + 0x118); /* movss */
    eax = MEM32(0x4D5370);
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x114); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00198894; /* je: equal / zero */

loc_00198874:
    ecx = MEM32(eax + 0x1B8);
    if (TEST_Z(ecx, ecx)) goto loc_00198894; /* je: equal / zero */

loc_0019887E:
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0xAC), _icall_esp); /* indirect call */
    }

loc_00198886:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */

loc_00198894:
    xmm1.f[0] = MEMF(edi + 0x108); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi + 0x108) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x104); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    /* comiss xmm1.f[0], MEMF(edi + 0x100) - sets EFLAGS */
    MEMF(edi + 0x104) = xmm1.f[0]; /* movss */
    if ((xmm1.f[0] <= MEMF(edi + 0x100))) goto loc_001988D1; /* jbe: below or equal (unsigned <=) */

loc_001988C5:
    eax = MEM32(edi + 0x100);
    MEM32(edi + 0x104) = eax;

loc_001988D1:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001988EB; /* jne: not equal / not zero */

loc_001988D5:
    ecx = MEM32(0x3F742C);
    PUSH32(esp, ecx);
    esi = ebp + 0xCC;
    PUSH32(esp, 0); sub_0017A530(); /* call 0x0017A530 */

loc_001988E7:
    esi = MEM32(esp + 0x20);

loc_001988EB:
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    edx = MEM32(edi + 0xC);
    MEM32(edi + 0x5C0) = edx;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0xC);
    MEM32(ebp + 0x5C0) = eax;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x13F4);
    MEM32(ebp + 0x5EC) = ecx;
    MEM32(ebp + 0x5F0) = edx;
    ecx = MEM32(esi + 0x13F4);
    edx = MEM32(edi + 0xC);
    MEM32(edi + 0x5EC) = ecx;
    MEM32(edi + 0x5F0) = edx;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_0019898D; /* jne: not equal / not zero */

loc_0019892F:
    ecx = MEM32(eax + 0x13F4);
    eax = MEM32(ecx + 0x1920);
    if (TEST_NZ(eax, eax)) goto loc_00198968; /* jne: not equal / not zero */

loc_0019893F:
    edx = MEM32(esi + 0x13F4);
    if (CMP_NE(MEM32(edx + 0x1920), 1)) goto loc_00198968; /* jne: not equal / not zero */

loc_0019894E:
    esi = edx + 0x1B70;
    eax = 1;
    PUSH32(esp, 0); sub_0016A830(); /* call 0x0016A830 */

loc_0019895E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00198968:
    if (CMP_NE(eax, 1)) goto loc_0019898D; /* jne: not equal / not zero */

loc_0019896D:
    eax = MEM32(esi + 0x13F4);
    edx = MEM32(eax + 0x1920);
    if (TEST_NZ(edx, edx)) goto loc_0019898D; /* jne: not equal / not zero */

loc_0019897D:
    esi = ecx + 0x1B70;
    eax = 1;
    PUSH32(esp, 0); sub_0016A830(); /* call 0x0016A830 */

loc_0019898D:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
